#include"atm-machine.h"
#include"atm-states.h"


class AtmShowScreen : public AtmStatesInterface
{
    public:
        void processRequest(AtmMachine atmMachine);
};