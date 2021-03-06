#ifndef entity_H_INCLUDED
#define entity_H_INCLUDED
typedef struct
{
    int id;
    char nombre[128];
    char empleo[128];
    int edad;
    int horasTrabajadas;
    float sueldo;
}eEntity;

eEntity* entity_new();
eEntity* entity_newParametros(char* idStr,char* nombreStr,char* empleoStr, char* edadStr, char* horasTrabajadas, char* sueldoStr);
void entity_delete();

int entity_setId(eEntity* this,int id);
int entity_getId(eEntity* this,int* id);

int entity_setNombre(eEntity* this,char* nombre);
int entity_getNombre(eEntity* this,char* nombre);

int entity_setEmpleo(eEntity* this,char* empleo);
int entity_getEmpleo(eEntity* this,char* empleo);

int entity_setEdad(eEntity* this,int edad);
int entity_getEdad(eEntity* this,int* edad);

int entity_setHorasTrabajadas(eEntity* this,int horasTrabajadas);
int entity_getHorasTrabajadas(eEntity* this,int* horasTrabajadas);

int entity_setSueldo(eEntity* this,float sueldo);
int entity_getSueldo(eEntity* this,float* sueldo);

int entitySortById(void* entityA, void* entityB);
int entitySortByName(void* entityA, void* entityB);
int entitySortByHours(void* entityA, void* entityB);
int entitySortBySalary(void* entityA, void* entityB);

int entityFilterHours(void* p);
int entityFilterId(void* p);
int entityFilterName(void* p);

int entityMapSalary(void* p);

#endif // entity_H_INCLUDED
