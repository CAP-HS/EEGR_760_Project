kcmake: main.c keychain.c
	gcc -o keychain_prog main.c keychain.c -I.
clean:
	rm keychain_prog
