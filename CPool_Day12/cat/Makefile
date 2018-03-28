all:	cat
		

cat:
		gcc -o cat my_cat.c -I../include -L../lib/my -lmy
		
clean:
		rm -f *.o
		rm -f *.h

fclean: clean
		rm -f cat
		
re:		fclean all
