+{sourcefile}: {sourcefile.c}
+	gcc -o {sourcefile} -pedantic -std=gnu99 -Wall -Werror {sourcefile.c}