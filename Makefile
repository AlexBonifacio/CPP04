EXS = ex00 ex01 ex02

all : Makefile
	@i=0; \
	while [ $$i -lt $(words $(EXS)) ]; do \
		dir=`echo $(EXS) | cut -d ' ' -f $$((i+1))`; \
		echo "Compilating $$dir"; \
		$(MAKE) -C $$dir; \
		i=$$((i+1)); \
	done

fclean : 
	@i=0; \
	while [ $$i -lt $(words $(EXS)) ]; do \
		dir=`echo $(EXS) | cut -d ' ' -f $$((i+1))`; \
		echo "Cleaning $$dir"; \
		$(MAKE) fclean -C $$dir; \
		i=$$((i+1)); \
	done