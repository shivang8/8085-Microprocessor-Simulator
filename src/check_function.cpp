#include "master.h"
#include "global.h"
#include "tools.h"
#include "arithmetic.h"
#include "branching.h"
#include "logical.h"
#include "load.h"

bool check_function(string instruction)
{
    vector<string> v;
    v=splitter(instruction);
    if(v[0]=="MOV")
    {
        return mov(instruction);
    }
    else if(v[0]=="MVI")
    {
		return mvi(instruction);
    }
    else if(v[0]=="LXI")
    {
        return lxi(instruction);
    }
    else if(v[0]=="LDA")
    {
        return lda(instruction);
    }
    else if(v[0]=="STA")
    {
        return sta(instruction);
    }
    else if(v[0]=="SHLD")
    {
        return shld(instruction);
    }
    else if(v[0]=="LHLD")
    {
        return lhld(instruction);
    }
    else if(v[0]=="STAX")
    {
        return stax(instruction);
    }
    else if(v[0]=="XCHG")
    {
        return xchg(instruction);
    }
    else if(v[0]=="ADD")
    {
        return add(instruction);
    }
    else if(v[0]=="ADI")
    {
        return adi(instruction);
    }
    else if(v[0]=="SUB")
    {
        return sub(instruction);
    }
    else if(v[0]=="INR")
    {
        return inr(instruction);
    }
    else if(v[0]=="DCR")
    {
        return dcr(instruction);
    }
    else if(v[0]=="INX")
    {
        return inx(instruction);
    }
    else if(v[0]=="DCX")
    {
        return dcx(instruction);
    }
    else if(v[0]=="DAD")
    {
        return dad(instruction);
    }
    else if(v[0]=="SUI")
    {
        return sui(instruction);
    }
    else if(v[0]=="CMA")
    {
        return cma(instruction);
    }
    else if(v[0]=="CMP")
    {
        return cmp(instruction);
    }
    else if(v[0]=="JMP")
    {
        return jmp(instruction);
    }
    else if(v[0]=="JC")
    {
        return jc(instruction);
    }
    else if(v[0]=="JNZ")
    {
        return jnz(instruction);
    }
    else if(v[0]=="JZ")
    {
        return jz(instruction);
    }
    else if(v[0]=="JNC")
    {
        return jnc(instruction);
    }
    else if(v[0]=="HLT")
    {
		return false;
	}
	else if(v[0]=="SET")
		return set1(instruction);
	else 
		return true;
}
