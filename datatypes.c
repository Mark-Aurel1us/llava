

typedef struct _Class{
	unsigned short id;
	char* name;
	unsigned int size;
	
	Object* (*create)(void* data);
	void* (*add)(void* self, void* addition);
	void* (*multiply)(void* self, void* multiplier);
	void* (*frac)(void* self, void* fraction);
	void* (*destruct)(void* self);
	
} Class;

typedef struct _Object{
	unsigned short id;	
} Object;
