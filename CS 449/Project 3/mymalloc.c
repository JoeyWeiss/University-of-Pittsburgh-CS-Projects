//Joseph Weiss (jbw40)
 
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <assert.h>

struct Block {
    unsigned char occ;    
    int size;             
    struct Block *prev;   
    struct Block *next;   
};
static struct Block *head = NULL;       
static struct Block *tail = NULL;


void *my_malloc(int size){
	 struct Block *best = NULL;
 struct Block *test = NULL;
if(head==NULL){
head=(sbrk(sizeof(struct Block)));

	
tail = head;
	
	
head->size = (size+(sizeof(struct Block)));

head->prev = NULL;

head->next = NULL;

head->occ = 1;	
return sbrk(size);
		
	}else{ //Find smallest block that works
		test = head;
				
		while(test != NULL){
		if(test->occ == 0){
			if((best==NULL || test->size < best->size)&&(test->size >= size+sizeof(struct Block))){
			best = test;
				if(best->size==size+sizeof(struct Block)){
					
				best->occ = 1;
				return (char*)best+sizeof(struct Block);
			} 
		}}
		test = test->next;
		}
		if(best != NULL){	//If none , then reset tail
		
		
		if((best->size)>(size+(sizeof(struct Block)*2))){  //Then split in half
			test = (struct Block*)((char*)best+(size+(sizeof(struct Block))));
			
			test->next = best->next;
			test->prev = best;
			test->next->prev = test;
				
			test->size = (int)(best->size-(size+(sizeof(struct Block))));
			
			
		
			best->size = sizeof(struct Block)+size;
			best->prev = best->prev;
			best->next = test;
		test->occ = 0;
				best->occ = 1;
			return ((char*)best+sizeof(struct Block));
		
		
		}else {
			best->occ = 1;
			return ((char*)best+sizeof(struct Block));
			
		}}else if(best==NULL){
			
			best=(sbrk(sizeof(struct Block)));
						best->occ = 1;

			best->size=(size+(sizeof(struct Block)));
		
		
		best-> prev = tail;		
		best->next = NULL;
			
			tail->next = best;
			tail = best;
			return sbrk(size);
			
			
	}	
		
	}

	
}

void my_free(void *ptr){
struct Block *dealloc = ptr-sizeof(struct Block);

dealloc->occ = 0;
if(tail==dealloc){
	
	
		tail = dealloc;
	if(dealloc == head){	//If block on its own
	
		head = tail = NULL;
		int goBack = dealloc->size;
		sbrk(-goBack);
	return;
		
	}else{		//set new tail
	tail = dealloc->prev;
			tail->next = NULL;
			
		
	int goBack2 = dealloc->size;
		sbrk(-goBack2);
		if(tail->occ==0){  //If tail does not exit, then call my_free again
			my_free((char*)tail+sizeof(struct Block));
		}
}
	}else{
		if((dealloc->prev==0)&&(head!=dealloc)){
		
		dealloc->prev->next=dealloc->next;
		
		dealloc->next->prev=dealloc->prev;
		
		dealloc->prev->size=(dealloc->prev->size)+(dealloc->size);
	
	dealloc=dealloc->prev;
	}if(dealloc->next->occ==0){

		dealloc->size=(dealloc->size)+(dealloc->next->size);
		
		dealloc->next=dealloc->next->next;
		
		dealloc->next->prev=dealloc;
		
		
	}
	}}

//Given dump_heap function
void dump_heap()
{
    struct Block *cur;
    printf("brk: %p\n", sbrk(0));
    printf("head->");
    for(cur = head; cur != NULL; cur = cur->next) {
        printf("[%d:%d:%d]->", cur->occ, (int)((char*)cur - (char*)head), cur->size);
        fflush(stdout);
        assert((char*)cur >= (char*)head && (char*)cur + cur->size <= (char*)sbrk(0)); // check that block is within bounds of the heap
        if(cur->next != NULL) {
            assert(cur->next->prev == cur); // if not last block, check that forward/backward links are consistent
            assert((char*)cur + cur->size == (char*)cur->next); // check that the block size is correctly set
        }
    }
    printf("NULL\n");
}





