#ifndef _SIM_STATE_H_
#define _SIM_STATE_H_

#include <time.h>
#include <stdlib.h>
#include <math.h>

#include "constants.h"
#include "particle.h"

typedef struct{
	int boxSize; //in k light years
	int count;
	Particle** particles;
} Sim_state;

Sim_state *getNextState(Sim_state *state, int timestep);
Sim_state *initRandom(Sim_state* state);
Sim_state *setParticles(Sim_state* state, Particle** particles, int count);
Sim_state *createEmpty(int count);
void state_free(Sim_state *sim);

#endif
