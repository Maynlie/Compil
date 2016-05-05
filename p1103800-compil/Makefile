FLEX 		= 	flex
BISON 		= 	bison
CC   		= 	g++
LD   		= 	g++
ECHO 		=	echo
CAT 		=	cat
RM 			=	rm

SRCD = src
INCD = include
OBJD = obj
BIND = bin

EXEC = ppc

OBJFILES = parser.o lexer.o main.o TableIdentificateur.o TypeDesc.o TableSymboles.o Symbole.o
OBJS = $(OBJFILES:%.o=$(OBJD)/%.o)

NO_COLOR=
OK_COLOR=
ERROR_COLOR=
WARN_COLOR=
INFO_COLOR=
FILE_COLOR=

OK_STRING=$(OK_COLOR)[OK]$(NO_COLOR)
ERROR_STRING=$(ERROR_COLOR)[ERRORS]$(NO_COLOR)
WARN_STRING=$(WARN_COLOR)[WARNINGS]$(NO_COLOR)

default: $(BIND)/$(EXEC)

$(BIND)/$(EXEC): $(OBJS)
	@$(ECHO) "$(INFO_COLOR)Linking $(FILE_COLOR)$@$(INFO_COLOR) ... $(NO_COLOR)\c"
	@$(LD) -o $@ $^ -L/home/pers/nicolas.louvet/public/lib -lfl 2> temp.log || touch temp.errors
	@if test -e temp.errors; then $(ECHO) "$(ERROR_STRING)" && $(CAT) temp.log; elif test -s temp.log; then $(ECHO) "$(WARN_STRING)" && $(CAT) temp.log; else $(ECHO) "$(OK_STRING)"; fi;
	@$(RM) -f temp.errors temp.log

$(OBJD)/%.o: $(SRCD)/%.c
	@$(ECHO) "$(INFO_COLOR)Compiling source file $(FILE_COLOR)$@$(INFO_COLOR) ... $(NO_COLOR)\c"
	@$(CC) -o $@ -c $< -I$(INCD) -I$(SRCD)  2> temp.log || touch temp.errors
	@if test -e temp.errors; then $(ECHO) "$(ERROR_STRING)" && $(CAT) temp.log; elif test -s temp.log; then $(ECHO) "$(WARN_STRING)" && $(CAT) temp.log; else $(ECHO) "$(OK_STRING)"; fi;
	@$(RM) -f temp.errors temp.log

$(SRCD)/parser.c: $(SRCD)/parser.y
	@$(ECHO) "$(INFO_COLOR)Generating parser $(FILE_COLOR)$@$(INFO_COLOR) ... $(NO_COLOR)\c"
	@$(BISON) -d -o $@ $<  2> temp.log || touch temp.errors
	@if test -e temp.errors; then $(ECHO) "$(ERROR_STRING)" && $(CAT) temp.log; elif test -s temp.log; then $(ECHO) "$(WARN_STRING)" && $(CAT) temp.log; else $(ECHO) "$(OK_STRING)"; fi;
	@$(RM) -f temp.errors temp.log

$(SRCD)/lexer.c: $(SRCD)/lexer.l
	@$(ECHO) "$(INFO_COLOR)Generating lexer $(FILE_COLOR)$@$(INFO_COLOR) ... $(NO_COLOR)\c"
	@$(FLEX) -o $@ $<  2> temp.log || touch temp.errors
	@if test -e temp.errors; then $(ECHO) "$(ERROR_STRING)" && $(CAT) temp.log; elif test -s temp.log; then $(ECHO) "$(WARN_STRING)" && $(CAT) temp.log; else $(ECHO) "$(OK_STRING)"; fi;
	@$(RM) -f temp.errors temp.log

clean:
	@$(RM) -f $(OBJD)/*.o
	@$(RM) -f $(SRCD)/parser.[hc]
	@$(RM) -f $(SRCD)/lexer.[hc]
	@$(RM) -f $(SRCD)/*.*~
	@$(RM) -f $(INCD)/*.*~

mrproper: clean
	@$(RM) -f $(BIND)/$(EXEC)
