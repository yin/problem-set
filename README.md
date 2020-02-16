Problem: Set of Integers
========================

Problem background: Implement a Set data structure, which defines the operations
in abstract class `SetOfInts`. A Set is a collection, which stores distinct
elements. The Set supports the following operations:

- Add an element to the Set.
- Check presence of an element in the Set.
- Remove an element from the Set.

Implement additional operations:
- Count the number of elements in the Set.
- Empty the Set, clearing all element present in the Set.

Each element is present oly once. For simplicity, assume the following
properties:

1. Our set stores only integers.
2. We store integers of values 0 to `max - 1`. Value `max` is given at creation
   of the Set.
3. We don't need to iterate over elements in the Set.
4. Assume, the client is responsible to provide valid arguments in range
   specified .

Solutions:
- In file `set_list_backed.h` we implemented a Set backed by a list, represented
  as a static array of int's.
  This solution has:
  - O(1) (constant time) of: creations, addition, count and clearing.
  - O(N) (linear time) of: removal and presence-check.

- In file `set_map_backed.h` we implemented a Set backed by a map, represented
  as a static array.
  This solution has:
  - O(1) (constant time) of: addition, removal, count and presence-check.
  - O(N) (linear time) of: creations, clearing.

- In file `set_double_backed.h` we implemented a Set backed by  map, represented
  as a static array.
  This solution has:
  - O(1) (constant time) of: creations, addition, removal, count, clearing and
    presence-check.

Advanced problems:
1. Disregard assumption #4: Check for invalid arguments to calls. How would you
   handle invalid calls?
2. Disregard assumption #3: Implement method `apply(operation)`, which applies
   a function to each element in Set.
   The order of iteration does not matter. What is the minimum time complexity
   of iteration?
3. Disregard assumption #2: Make the size of the Set dynamic, resizing as
   required. What is the best time and space complexity you can achieve?
4. Disregard assumption #1: Make the Set handle any type specified at creation
   of the Set (using templates).
