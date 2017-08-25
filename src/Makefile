IDIR = ./header
CC = g++
CFLAGS=-I$(IDIR)

ODIR=object
LDIR=./src

LIBS=-lm

_DEPS = master.h 
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ =  program_counter_increment.o dec2hex.o hex2dec.o string_uppercase.o set_flag_register.o splitter.o initilize_map_opcode.o check_opcode.o check_memory.o resister_is.o check_storage.o rpair.o add.o adi.o sub.o sui.o inx.o inr.o dcr.o dcx.o dad.o mov.o mvi.o lxi.o lda.o sta.o xchg.o lhld.o shld.o stax.o cmp.o cma.o jmp.o jc.o jnc.o jz.o jnz.o set.o check_function.o does_file_exist.o execution.o debugger_execution_arg.o check_breakpoint.o debugger_execution.o initialize_map_debugger.o check_debugger.o help.o breakpoint.o print.o input_file.o this_is_debugger.o input.o main.o 

OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))

$(ODIR)/%.o: %.cpp $(DEPS)
		$(CC) -c -o $@ $< $(CFLAGS)
	
8085: $(OBJ)
	g++ -o $@ $^ $(CFLAGS) $(LIBS)

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core $(INCDIR)/*~
