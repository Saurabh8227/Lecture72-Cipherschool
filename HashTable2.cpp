Learned about Hash table, hash function, key and lot more. No coding part is there in this lecture.

A hash function is a function that takes an input (or ‘message’) and returns a fixed-size string of bytes.
 The output, typically a number, is called the hash code or hash value. 
 The main purpose of a hash function is to efficiently map data of arbitrary size to fixed-size values, which are often used as indexes in hash tables.

Key Properties of Hash Functions
Deterministic: A hash function must consistently produce the same output for the same input.
Fixed Output Size: The output of a hash function should have a fixed size, regardless of the size of the input.
Efficiency: The hash function should be able to process input quickly.
Uniformity: The hash function should distribute the hash values uniformly across the output space to avoid clustering.
Pre-image Resistance: It should be computationally infeasible to reverse the hash function, i.e., to find the original input given a hash value.
Collision Resistance: It should be difficult to find two different inputs that produce the same hash value.
Avalanche Effect: A small change in the input should produce a significantly different hash value.
