#include <tcl.h>
#include <stdlib.h>
#include <stdio.h>

int main() {
	Tcl_Interp *pTclInterp = Tcl_CreateInterp();
    if(!pTclInterp)
    {
            printf("Tcl Interpreter could not be created.\n");
            return 0;
    }
    Tcl_Eval(pTclInterp," package req Expect");
    printf("%s",pTclInterp->result);
    Tcl_Eval(pTclInterp," puts \"Hello ,world !\"");
    Tcl_DeleteInterp(pTclInterp);
    return 0;
}

