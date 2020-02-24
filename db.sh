NAME=$1
echo ${NAME}

if [ ${NAME} == "list" ] ; then
    echo "main"
    ls -ltr ./main
    echo "libft"
    ls -ltr ./main/libft
fi


if [ -e ./main/libft/${NAME}.c ] && [ -e ./main/${NAME}_main.c ] ; then
    echo "izin"
    gcc -c -I -./main/debug/ ./main/libft/*.c ./main/debug/*.c
    ar rcs libft.a *.o
    gcc -I ./main/debug ./main/${NAME}_main.c libft.a
    rm *.o *.a
fi
