Don't use embedded getopt and srand copies

--- a/Makefile
+++ b/Makefile
@@ -1,7 +1,7 @@
 # $Header: /home/henk/CVS/dealer/Makefile,v 1.15 1999/08/05 19:57:44 henk Exp $
 
 CC      = gcc
-CFLAGS = -Wall -pedantic -I. -DNDEBUG -c
+CPPFLAGS += -DSTD_RAND # don't use embedded GNU random lib
 FLEX    = flex
 YACC    = yacc
 # Note: this should be the Berkeley Yacc, sometimes called byacc
@@ -10,21 +10,22 @@ PROGRAM  = dealer
 TARFILE  = ${PROGRAM}.tar
 GZIPFILE = ${PROGRAM}.tar.gz
 
-SRC  = dealer.c pbn.c  c4.c getopt.c pointcount.c __random.c rand.c srand.c
+SRC  = dealer.c pbn.c  c4.c pointcount.c
 LSRC = scan.l
 YSRC = defs.y
 HDR  = dealer.h tree.h
 
-OBJ  = dealer.o defs.o pbn.o c4.o getopt.o pointcount.o __random.o rand.o srand.o
+OBJ  = dealer.o defs.o pbn.o c4.o pointcount.o
 LOBJ = scan.c
 YOBJ = defs.c
+MAN  = dealer.6 dealer.dpp.6
 
 
-dealer: ${OBJ} ${LOBJ} ${YOBJ}
-	$(CC) -o $@ ${OBJ} 
+dealer: ${OBJ} ${LOBJ} ${YOBJ} ${MAN}
+	$(LINK.c) -o $@ ${OBJ}
 	
 clean:
-	rm -f ${OBJ} ${LOBJ} ${YOBJ} 
+	rm -f ${OBJ} ${LOBJ} ${YOBJ} ${MAN}
 	${MAKE} -C Examples clean
 
 tarclean: clean ${YOBJ}
@@ -58,7 +59,13 @@ test: dealer
 # C-code
 #
 .c.o:
-	${CC} ${CFLAGS} -o $@ $<
+	$(COMPILE.c) -o $@ $<
+
+#
+# Manpages
+#
+%.6: %.pod
+	pod2man --section=6 --release="Dealer" --center="User Documentation" $< > $@
 
 # 
 # File dependencies
@@ -69,5 +76,4 @@ dealer.o: tree.h scan.l dealer.h defs.c
 pbn.o: tree.h scan.l dealer.h
 defs.o:	tree.h
 c4.o: c4.c  c4.h
-getopt.o: getopt.h
 pointcount.o: pointcount.h
