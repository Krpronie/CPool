all:	libmy

libmy:
		gcc -c *.c
		ar rc libmy.a *.o
		cp libmy.a ..
		cp my.h ../../include
		
clean:
		rm -f *.o
		rm -f *.a
		rm -f *.h
