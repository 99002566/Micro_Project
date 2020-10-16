#! bin/bash
while IFS=, read -r name email repo; do
    
[[ "$name" != "Name" ]] && echo "$name"
[[ "$email" != "Email ID" ]] && echo "$email"
if [ "$repo" != "Repo link" ]; then
    git clone "$repo"
    if [ "$?" == 0 ]; then
    GIT_STATUS=" Clone Successful"
    else
    GIT_STATUS=" Clone Failed"
    fi
    REPOSITORY_NAME=`echo "$repo" | cut -d'/' -f5`
    BUILD_MAKE=`find $REPOSITORY_NAME -name Makefile -exec dirname {} \;`
    make -C "$BUILD_MAKE"
    if [ "$?" == 0 ]; then
    BUILD_STATUS="Build Successful"
    else
    BUILD_STATUS="Build Failed"
    fi
    err=`cppcheck $REPOSITORY_NAME | grep "error" | wc -l`
    #echo "$err"
    make test -C $BUILD_MAKE
    FIN_VAL=`find "$BUILD_MAKE" -name "Test*.out"`
    echo "dir = $FIN_VAL"
    valgrind "./$FIN_VAL" 2> valgrinr.csv
    VALG=`grep "ERROR SUMMARY" valgrinr.csv`
    echo "ERR = ${VALG:23:2}"
    echo "$name ,$email ,$repo ,$GIT_STATUS ,$BUILD_STATUS ,$err ,${VALG:23:2}" >> REPORT_SUMMARY.csv
fi
done < Input.csv
