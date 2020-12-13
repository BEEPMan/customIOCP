using namespace std;

#include<minwindef.h>
#include<minwinbase.h>

HANDLE myCreateI0CompltionPort(
	HANDLE FileHandle,
	HANDLE ExistingCompletionPort,
	ULONG_PTR CompletionKey,
	DWORD NumberOfConcurrentThreads
)
{

}

BOOL myGetQueuedCompletionStatus(
	HANDLE CompletionPort,
	LPDWORD lpNumberOfBytesTransferred,
	PULONG_PTR lpCompletionKey,
	LPOVERLAPPED* lpOverlapped,
	DWORD dwMilliseconds
)
{

}

BOOL myPostQueuedCompletionStatus(
	HANDLE       CompletionPort,
	DWORD        dwNumberOfBytesTransferred,
	ULONG_PTR    dwCompletionKey,
	LPOVERLAPPED lpOverlapped
)
{

}