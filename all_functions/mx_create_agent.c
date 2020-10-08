#include "only_smiths.h"

t_agent *mx_create_agent(char *name, int power, int strength) {
    t_agent *agent = NULL;

    if(!name)
        return NULL;
    agent = malloc(sizeof(t_agent));
    agent -> name = mx_strdup(name);
    agent -> power = power;
    agent -> strength = strength;

    return agent;
}

/*
 *   int main(void) {
 *       char name[] = "Neo";
 *       int power = 81;
 *       int strenght = 60;
 *       t_agent *agent = NULL;
 *
 *       agent = mx_create_agent(name, power, strenght);
 *       printf("%s\n", agent -> name);
 *       printf("%d\n", agent -> power);
 *       printf("%d\n", agent -> strength);
 *   }
 */
