# Compiler exec
CCompilerExec=g++

# Default FLAGS for compilation
CFLAGS= -g -Wall -ansi -pedantic
#CFLAGS+= -Werror

# Ddefaul FLAGS for linking
LDFLAGS= 

# Directory of c source files
SRCdir=src

# Directory of c header files
INCdir=include

# For object files
OBJdir=objectFiles

#Does not forget the "include" directory
CFLAGS+=-I $(INCdir)

#For debugging or profiling
#CFLAGS+= -g
#CFLAGS+= -pg
#LDFLAGS+= -g
#LDFLAGS+= -pg

#Name of the executable can be adapted
EXEC=ratp

# The object
OBJ = $(OBJdir)/Arret.o $(OBJdir)/Edge.o $(OBJdir)/Graphe.o $(OBJdir)/IHM.o $(OBJdir)/Itineraire.o $(OBJdir)/Ligne.o $(OBJdir)/Metro.o $(OBJdir)/Node.o $(OBJdir)/main.o

# If any .o has been (re)created ==> move it to OBJdir
$(EXEC): $(OBJ)
	-@echo "Linking    $(EXEC)"
	-@for i in *.o ; do if [ $$i != "*.o" ] ; then mv $$i $(OBJdir) ; fi ; done
	-@$(CCompilerExec) -o $@ $(OBJ) $(LDFLAGS)

# All c need a corresponding h (except for main)
#   but any modification in c or h ==> compilation
$(OBJdir)/%.o: $(SRCdir)/%.cpp $(INCdir)/%.h
	-@echo "Generating $@"
	-@mkdir -p $(OBJdir)
	-@$(CCompilerExec) $(CFLAGS) -c $<

###------------------------------
### Cleaning
###------------------------------------------------------------

clean:
	-@rm -rf $(OBJdir)
#if compilation failed, some object files can be here
	-@rm -rf *.o

clean_all: clean clean_doc cleanSource
	-@rm -rf $(EXEC) $(EXEC_2)

cleanSource:
	-@find . \( -name "*~" -o -name "*.old" -o -name "#*" \) -print -exec rm \{\} \;


###------------------------------
### Docs
###------------------------------------------------------------

DOC_OUTPUT_LOG = doc_output.log
DOC_ERRORS_LOG = doc_errors.log

doc:
	-@mkdir -p docs

# Launch documentation generation
	-@if [ `command -v doxygen` ] ; then printf "Documentation generation ... "  ; rm -f $(DOC_ERRORS_LOG); doxygen Doxyfile 2> $(DOC_ERRORS_LOG) 1> $(DOC_OUTPUT_LOG);\
	else echo "doxygen is not available, documentation can not be generated" ; fi

# Check if there are some warnings/errors
	-@if [ -s $(DOC_ERRORS_LOG) ]; then printf "KO\n==> There are some errors/warnings during documentation generation, see $(DOC_ERRORS_LOG)\n" ;\
	else printf "OK\nEverything works fine\n"; rm -f $(DOC_ERRORS_LOG) $(DOC_OUTPUT_LOG); fi

clean_doc:
	-@rm -rf docs $(DOC_ERRORS_LOG) $(DOC_OUTPUT_LOG)


###------------------------------
### Help
###------------------------------------------------------------

help:
	@echo ""
	@echo "Available targets:"
	@echo "  $(EXEC) (default target)     : full compilation of the projet"
	@echo "  doc                              : generate the source code documentation thanks to doxygen (make nothing if doxygen does not exist)"
	@echo "  clean                            : remove object files (.o) but the igmplot executable remains"
	@echo "  clean_all                        : remove object files (.o), igmplot executable and generated documentation (if exists)"
	@echo ""

.PHONY:  $(EXEC) $(EXEC_2) clean clean_all cleanSource doc clean_doc help
