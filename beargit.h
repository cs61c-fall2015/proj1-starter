#include "util.h"

int beargit_init(void);
int beargit_add(const char* filename);
int beargit_rm(const char* filename);
int beargit_commit(const char* message);
int beargit_status();
int beargit_log(int limit);
int beargit_branch();
int beargit_checkout(const char* arg, int new_branch);
int beargit_reset(const char* commit_id, const char* filename);
int beargit_merge(const char* arg);

// Helper functions
int get_branch_number(const char* branch_name);
void next_commit_id(char* commit_id);

// Number of bytes in a commit id
#define COMMIT_ID_BYTES SHA_HEX_BYTES

// Preprocessor macros capturing the maximum size of different  structures
#define FILENAME_SIZE 512
#define COMMIT_ID_SIZE (COMMIT_ID_BYTES+1)
#define MSG_SIZE 512

#define BRANCHNAME_SIZE 128
#define COMMIT_ID_BRANCH_BYTES 10
