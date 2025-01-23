# TDD Queue
 This program is a basic implementation of a first-in first-out queue module.
 
 Three main files are used for this implementation: Queue.c, Queue.h, and TestQueue.c.

 Queue.c contains the functions required to perform the enqueue, dequeue, peek, and initialise operations.
 To implement this a Queue structure was used along with clearly separated and defined functions
 to maintain object oriented programming practices.

 TestQueue.c contains the Unity framework used to test and perform TDD on the implementation process.
 This was written in a way such that the test cases are independent from each other, and will not create
 dependencies that could affect the outcome of other test cases. Unity was used as it provides a method of
 testing which promotes functionality and testability in a way which streamlines the implementation of new functions.
