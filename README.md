<h1>This repository contains all the programs I have done in Design and Analysis of Algorithm Laboratory Course of 5th Semester.</h1>

**School of Computer Engineering**

**KIIT deemed to be University**

**Laboratory Lesson Plan – Autumn 2024 (5<sup>th</sup> Semester)**

Discipline: CS / IT / CSCE / CSCE

Course Name and Code: Algorithms Laboratory-CS2098 (L-T-P-Cr: 0-0-2-1)

**Course Contents :**

**List of Experiments (Lab-Day wise):**

**Lab Day 1: Revision of Data Structures**

**1.1** _Aim of the program:_ Write a program to find out the second smallest and second largest element stored in an array of n integers.

_Input_: Size of the array is ‘n’ and read ‘n’ number of elements from a disc file.

_Output:_ Second smallest, Second largest

**1.2** _Aim of the program:_ Given an array arr\[\] of size N, find the prefix sum of the array. A prefix sum array is another array prefixSum\[\] of the same size, such that the value of prefixSum\[i\] is arr\[0\] + arr\[1\] + arr\[2\] . . . arr\[i\].

_Input Array_: 3 4 5 1 2

_Output Array_: 3 7 12 13 15

**1.3** _Aim of the program:_ Write a program to read ‘n’ integers from a disc file that must contain some duplicate values and store them into an array. Perform the following operations on the array.

1. Find out the total number of duplicate elements.
2. Find out the most repeating element in the array.

_Input:_

Enter how many numbers you want to read from file: 15

_Output:_

The content of the array: 10 40 35 47 68 22 40 10 98 10 50 35 68 40 10

Total number of duplicate values = 4

The most repeating element in the array = 10

**1.4** _Aim of the program:_ Write a function to ROTATE_RIGHT(p1, p2 ) right an array for first p2 elements by 1 position using EXCHANGE(p, q) function that swaps/exchanges the numbers p & q. Parameter p1 be the starting address of the array and p2 be the number of elements to be rotated.

_Input:_

Enter an array A of size N (9): 11 22 33 44 55 66 77 88 99

Call the function ROTATE_RIGHT(A, 5)

_Output:_

Before ROTATE: 11 22 33 44 55 66 77 88 99

After ROTATE: 55 11 22 33 44 66 77 88 99

**Lab Day 2: Fundamentals of Algorithmic Problem Solving**

**2.1** _Aim of the program:_ Write a program in C to convert the first ‘n’ decimal numbers of a disc file to binary using recursion. Store the binary value in a separate disc file.

_Note#_ Read the value of ‘n’, source file name and destination file name from command line arguments. Display the decimal numbers and their equivalent binary numbers from the output file.

Give the contents of the input disc file “inDec.dat” as

30 75 2564 …

Contents of the output disc file “outBin.dat” as

The binary equivalent of 30 is 0000000000011110

The binary equivalent of 75 is 0000000001001011

The binary equivalent of 2564 is 0000101000000100

_Terminal Input:_

$gcc lab2q1.c -o lab2q1

$./lab2q1 150 inDec.dat outBin.dat

_Output:_ Content of the first ‘n’ decimal and their equivalent binary numbers

**2.2** _Aim of the program:_ Write a program in C to find GCD of two numbers using recursion. Read all pair of numbers from a file and store the result in a separate file.

_Note#_ Source file name and destination file name taken from command line arguments. The source file must contain at least 20 pairs of numbers.

Give the contents of the input disc file “inGcd.dat” as 8 12 20 45 30 80

Contents of the output disc file “outGcd.dat” as

The GCD of 8 and 12 is 4

The GCD of 20 and 45 is 5

The GCD of 30 and 80 is 10

_Terminal Input:_

$gcc lab2q2.c -o lab2q2

$./lab2q2 inGcd.dat outGcd.dat

_Output:_ Display the gcd stored in the output file outGcd.dat

**Lab Day 3: Divide and Conquer Method**

**3.1** _Aim of the program:_ Write a menu driven program to sort list of array elements using Merge Sort technique and calculate the execution time only to sort the elements. Count the number of comparisons.

_Note#_

- To calculate execution time, assume that single program is under execution in the CPU.
- Number of elements in each input file should vary from 300 to 500 entries.
- For ascending order: Read data from a file “inAsce.dat” having content 10 20 30 40….., Store the result in “outMergeAsce.dat”.
- For descending order: Read data from a file “inDesc.dat” having content 90 80 70 60…., Store the result in “outMergeDesc.dat”.
- For random data: Read data from a file “inRand.dat” having content 55 66 33 11 44 …, Store the result in “outMergeRand.dat”

_Sample Input from file:_

MAIN MENU (MERGE SORT)

1\. Ascending Data

2\. Descending Data

3\. Random Data

4\. ERROR (EXIT)

_Output:_

Enter option: 1

Before Sorting: Content of the input file

After Sorting: Content of the output file

Number of Comparisons: Actual

Execution Time: lapse time in nanosecond

**3.2** _Aim of the program:_ Write a menu driven program to sort a list of elements in ascending order using Quick Sort technique. Each choice for the input data has its own disc file. A separate output file can be used for sorted elements. After sorting display the content of the output file along with number of comparisons. Based on the partitioning position for each recursive call, conclude the input scenario is either best-case partitioning or worst-case partitioning.

_Note#_

- _The_ worst-case behavior for quicksort occurs when the partitioning routine produces one subproblem with n-1 elements and one with 0 elements. The best-case behaviour occurred in most even possible split, PARTITION produces two subproblems, each of size no more than n/2.
- Number of elements in each input file should vary from 300 to 500 entries.
- For ascending order: Read data from a file “inAsce.dat” having content 10 20 30 40….., Store the result in “outQuickAsce.dat”.
- For descending order: Read data from a file “inDesc.dat” having content 90 80 70 60…., Store the result in “outQuickDesc.dat”.
- For random data: Read data from a file “inRand.dat” having content 55 66 33 11 44 …, Store the result in “outQuickRand.dat”

_Sample Input from file:_

MAIN MENU (QUICK SORT)

1\. Ascending Data

2\. Descending Data

3\. Random Data

4\. ERROR (EXIT)

_Output:_

Enter option: 1

Before Sorting: Content of the input file

After Sorting: Content of the output file

Number of Comparisons: Actual

Scenario: Best or Worst-case

**Lab Day 4: Heap**

**4.1** _Aim of the program:_

Define a _struct person_ as follows:

struct person

{

int id;

char \*name;

int age;

int height;

int weight;

};

Write a menu driven program to read the data of ‘n’ students from a file and store them in a dynamically allocated array of _struct person_. Implement the min-heap or max-heap and its operations based on the menu options.

_Sample Input/Output:_

MAIN MENU (HEAP)

1\. Read Data

2\. Create a Min-heap based on the age

3\. Create a Max-heap based on the weight

4\. Display weight of the youngest person

5\. Insert a new person into the Min-heap

6\. Delete the oldest person

7\. Exit

Enter option: 1

Id Name Age Height Weight(pound)

0 Adarsh Hota 39 77 231

1 Levi Maier 56 77 129

2 Priya Kumari 63 78 240

3 Dorothy Helton 47 72 229

4 Florence Smith 24 75 171

5 Erica Anyan 38 73 102

6 Norma Webster 23 75 145

Enter option: 4

Weight of youngest student: 65.77 kg

_Note#:_ Other menu choices are similarly verified.

**Lab Day 5: Greedy Techniques**

**5.1** _Aim of the program:_ Write a program to find the maximum profit nearest to but not exceeding the given knapsack capacity using the Fractional Knapsack algorithm.

_Notes#_ Declare a structure ITEM having data members item_id, item_profit, item_weight and profit_weight_ratio. Apply heap sort technique to sort the items in non-increasing order, according to their profit /weight.

_Input:_

Enter the number of items: 3

Enter the profit and weight of item no 1: 27 16

Enter the profit and weight of item no 2: 14 12

Enter the profit and weight of item no 3: 26 13

Enter the capacity of knapsack:18

_Output:_

Item No profit Weight Amount to be taken

3 26.000000 13.000000 1.000000

1 27.000000 16.000000 0.312500

2 14.000000 12.000000 0.000000

_Maximum profit:_ 34.437500

**5.2** _Aim of the program:_ Huffman coding assigns variable length code words to fixed length input characters based on their frequencies or probabilities of occurrence. Given a set of characters along with their frequency of occurrences, write a c program to construct a Huffman tree.

_Note#_

- Declare a structure SYMBOL having members alphabet and frequency. Create a Min-Priority Queue, keyed on frequency attributes.
- Create an array of structures where size=number of alphabets.

_Input:_

Enter the number of distinct alphabets: 6

Enter the alphabets: a b c d e f

Enter its frequencies: 45 13 12 16 9 5

_Output:_

In-order traversal of the tree (Huffman): a c b f e d

**Lab Day 6: Greedy Techniques (Cont…) --** Minimum Cost Spanning Tree (Kruskal’s Algorithm, Prim’sAlgorithm)

**6.1** _Aim of the program:_ Given an undirected weighted connected graph G(V, E) and starring vertex ‘s’. Maintain a Min-Priority Queue ‘Q’ from the vertex set V and apply Prim’s algorithm to

- Find the minimum spanning tree T(V, E’). Display the cost adjacency matrix of ‘T’.
- Display total cost of the minimum spanning tree T.

_Note#_ Nodes will be numbered consecutively from 1 to n (user input), and edges will have varying weight. The graph G can be read from an input file “inUnAdjMat.dat” that contains cost adjacency matrix. The expected output could be displayed as the cost adjacency matrix of the minimum spanning tree and total cost of the tree.

Content of the input file “inUnAdjMat.dat” could be

| 0   | 4   | 0   | 0   | 0   | 0   | 0   | 8   | 0   |
| --- | --- | --- | --- | --- | --- | --- | --- | --- |
| 4   | 0   | 8   | 0   | 0   | 0   | 0   | 11  | ![](data:image/png;base64,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)0 |
| 0   | 8   | 0   | 7   | 0   | 4   | 0   | 0   | 2   |
| 0   | 0   | 7   | 0   | 9   | 14  | 0   | 0   | 0   |
| 0   | 0   | 0   | 9   | 0   | 10  | 0   | 0   | 0   |
| 0   | 0   | 4   | 14  | 10  | 0   | 2   | 0   | 0   |
| 0   | 0   | 0   | 0   | 0   | 2   | 0   | 1   | 6   |
| 8   | 11  | 0   | 0   | 0   | 0   | 1   | 0   | 7   |
| 0   | 0   | 2   | 0   | 0   | 0   | 6   | 7   | 0   |

_Input:_

Enter the Number of Vertices: 9

Enter the Starting Vertex: 1

_Output:_

| 0   | 4   | 0   | 0   | 0   | 0   | 0   | 8   | 0   |
| --- | --- | --- | --- | --- | --- | --- | --- | --- |
| 4   | 0   | 0   | 0   | 0   | 0   | 0   | 0   | 0   |
| 0   | 0   | 0   | 7   | 0   | 4   | 0   | 0   | 2   |
| 0   | 0   | 7   | 0   | 9   | 0   | 0   | 0   | 0   |
| 0   | 0   | 0   | 9   | 0   | 0   | 0   | 0   | 0   |
| 0   | 0   | 4   | 0   | 0   | 0   | 2   | 0   | 0   |
| 0   | 0   | 0   | 0   | 0   | 2   | 0   | 1   | 0   |
| 8   | 0   | 0   | 0   | 0   | 0   | 1   | 0   | 0   |
| 0   | 0   | 2   | 0   | 0   | 0   | 0   | 0   | 0   |

_Total Weight of the Spanning Tree:_ 37

**6.2** _Aim of the program:_ Given an undirected weighted connected graph G(V, E). Apply Krushkal’s algorithm to

- Find the minimum spanning tree T(V, E’) and Display the selected edges of G.
- Display total cost of the minimum spanning tree T.

_Note#_ Nodes will be numbered consecutively from 1 to n (user input), and edges will have varying weight. The weight matrix of the graph can be represented from the user’s input in the given format. The expected output could be the selected edge and the corresponding cost of the edge as per the sample output.

_Input Format:_

- The first line contains two space-separated integers ‘n’ and ‘m’, the number of nodes and edges in the graph.
- Each line ‘i’ of the ‘m’ subsequent lines contains three space-separated integers ‘u’, ‘v’ and ‘w’, that describe an edge (u, v) and weight ‘w’.

_Input:_![](data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAASEAAACNCAYAAAD4tMw6AABApUlEQVR4Xu29Z1icV7YmOj/vM//mzpy5c+6Enu7Tp+e0u/s4p7acg9rZli3ZSijbkpVzRBJRJIkgcs5IZETOOeecC4qMkASSkEAI6Z29dlFQfFVFhirge59nPzZVH1Vi77XfvdJe6z9AhAgRIjSI/yB8QYQIESKWEiIJiRAhQqMQSUiECBEahUhCIkSI0ChEEhIhQoRGIZKQCBEiNAqRhESIEKFRiCQkQoQIjUIkIREiRGgUIgmJECFCoxBJSIQIERqFSEJahedorCpBRnoqsnKL8eip8H0Rs8XgQB9qKkpRXl6BCjYqK6pQW9OIwZFR4aMiNASRhLQEz54MItzHDtbOvpyE3K2McOmKA+4MCZ8UMXMMwcdKD199/jV27dqNPbv3YMv67/GjzjF03n8sfFiEhiCSkJbgblMWvvpwLSJLevjPA9JCfP3B+7hV0CZ4UsRM0dtSBW83Z2SXVqO5uRmSlhY46B3EjqNGePjkmfBxERqCSEJaggFpAT568SXoO0fynyUF4Vj3zc8oaLwjeFLETDH0+BEePx5WfAX6h/fAITBN4TURmoZIQlqC50+fwNf0GF556Q1cMrHCVXNzRGeUCR8TMQ/0VKdBR2cX8upvC98SoUGsWBJ69uwZ+vr6kJmRAX8/P1y3toH9dVsE3riBkqJiPHz4QPgrmsdwH87v+Ab/6f/5j3j7q92Q9j8RPqFxDA8Po76uDpG3bsHF2RnWllZwd3VFfGwc2tra8PSp9nrTY9xNsfewAQZGhO9oFiSrd+7cQVZWFgKYrNra2MCOyepNJqvFhUV48EALZXUBseJI6Pnz56itroGdzXVc0r0IFxcXREfHICkphY1k3GKbx8HeARcvXICfry/a29uFH6ERPHv2GAH25rByDkRWYgg+f/tFfLX5CFruKJoTmkN//z3EREVD79JlmJmaITAwCIkJiXxe4+LjERAQAGMjI5gaX0F2djYGBweFH6FRPB+6B4Pjv+Cqd7zwLY2irrYW9rZ2XFadnZmssjlOSpbLaiQcHRy5rPp6e6NNujL9gyuKhOjECPD3h4G+PqIio1BbV4+Gxia0tEohbe+AtK0dEvb/9FoVI6qAgBvQPX8BcbGxwo9acvRWp+CrtV8goaKP/9xaFIO3XnoFlr6JgieXHpUVlTAzMYUd2yxFxSWob2hEs6SFz2cbm9dWtjmamiWoq29ATk4uTNmzV80t0KElBE/oacjDzo2bkVWvHT62wYeDTCu/CQM9fU42NbV1E7LaJpNV+n96rbqmFjdvBnJZjY6K4gftSsKKIaE7fXeYGnsdtmyj1LOFo80haWnlm4U2iOKg1+i99o5OlJaVw8jQiJPXyIjm9PTO/BCseXctUmruyV548gC/bfgChs4Rkx9cYmSmZ0CfbZQEpvV0dnXzjdGsYl7lc0qE1MbmNSgwGPqX9VDHTDdtQHKAJXT26mJQC4Jid+/eZdqPLWyYvBKhz1RWKdfpCtM2/Xx88eSJ9pnqc8WKIKGhx0PM/LLlqqviyay4kKoWmAZtmMamZqY9GSAsNEz40UuGkcEe6B3ZgxMGdui59wDFKaE48NsRlLWMkZIGUFpSwk/f7OwcdDACEs6dukFz3dXdi0imjV7U1UVXV5fwo5cUz0Yewejwdph4xAnfWnIMM/JwtLOHPRuk7QhlVThksjsmq0y2m9l/6dAMDgoSfvSyxYogIfJVWJiZj5/EE4vYwkimi50iHWhiRCNcYBpEQGSqkcpLG66yokL48UuG4cF7yEqKhre3D8JuxaPjdr/wkSXD3Tt32KlrjNjYOHR0dinN27SDbRz6PT8/f1hbWWn05H46fA/h/r6o6xgQvrXkiI+Lg7mpGSeXqQiouUWKDkbkHZ2TZZeIi9wMJKsl7JBYCVj2JNR3+zYunD/PfRWTFlXC1NimeiREhsDY2BQ3wpO4E1q42PJBpwyZHLTxNB3hoWiJJkE+h8CbN3GdmQvtnZ1qtcjpBjfdGBmRIzs1OUX4NasOZIaRrOYXFHIyEc6XfJC5W1ddjrAbXrC2sUNaQRVaW1vH3ydZTWbzacw0Ik2S+0Jh2ZNQcGAQvLy8ucBPWkxJC6SSRgQ7GeLP//YSrvkkoJtOFRWLzheePU9OQJMrJqiuqhJ+zaoCmU8W5ubIyy+YcrPMZHR19yCUmbkuTs54/Hh1X5UICwmBh7uHWv+PfDQzWW6srYTe3h/x6tv/QFJZM9qkEyQk/10id01q7guFZU1CdGKbMtJIT89QuVmkzBSLdDXCp2vXIb26g2lNvewUUX5OPojIwsMj4OzoKPyqVYWiggKYGF/hBCKco/EhYebEWHSMO1YlqjcVneoNDY24YmyM+nrtcFJrAiSrZIalpKTy+RLOk3y0SNuZ9tmFnt4eXN6/GT/tOQtJu7I22sK0/kgK4dvbC79q2WFZk1Bvby+srlmioLBIyb6mRWvrkOLSvo3Y+OtZ5OdnISQkDDlFlWwBJ04VxUHCQfkZpsYmwq9aVUiIi4ebqxvfDMI54nPbImWmbRsK87ORmJiErJwC1De1cKep8FkaXT29PMJWWroyfBhzwf3792FjZc21S6GsygbJaycqSwsRH5+IjMQQfPfxB9C1CeQHp9w5LR/kx0xNS4eRvqHwq5YdljUJkdlEWbuVVdVcxZ28UdrRUpODjZ9/iO0HLsDR1gY63/8D36zfhpTCukk29vjCspOd8lyMDAxRWlLKE8lqa2pW0ajl6r2DrR2ioqJVapfNrW1oa21GgJsdTC0s4Wxngw1ffYPrvlHo6O5SSUQUWaMcI39fv/HvUf7ulTsowzwmKoZnQVepkFUaRPgZccG4eOEiHJ3dcH6/Dl55eQ3CM8tVrgOX1dw8XLWw0LrE0NliWZNQUWEhO7FdeaKXcGGlnb3ICnPF31/8M3Ycv4Kyhg4UJ/jg7Zf/BgO3WNnpIlhYOqHIwU1hZTcXF4QyGz4oMHDVjJDgYJ6Dcv7sWSQzjZDMLcX5aZa0or2tFTftDfHNDzqIya1FZ2sjrurpwvVGDHdiCzcLDdpg5AuhJFL+PUFBSt+9kkdEWDjMTEz4FRfKC1KW1W7kJYXgp2++hJVnJB4Mj8Dm4j58/OVmlNY1swNT4O8ck9WCgkL+mbd7l/dduGVNQjXVNXBydEJFZZWSY7r79m04Gh7Bq6+w0yS1BH39A8iOcMV7b74O26A0tKk5XTIzs2Bmaop7d+/i0aNHbAyuovGImw3+vr6ICI9QOoFb2zpQmZ+Iz9e8hdNmHuju6+MlMmTvqzfHSBOyZqZIQnz8+Pcof/fKHY/Z31teVg5HeweUV1ROktXm1na01pfhyOYv8N3Oc6hp7cWdrgac3PYdfjlrjYZWSmRU9rfR2lD+lrmZ2bJ3+C9rEqIsacur15CfP9nOJlOsu7USh7d8g00HjNAo7UFfbweuHN2GT77WQX616tOFhz5TUvkVhdWMpIRETu6T84NaOHHHeprixdc/gE9MAbo7ZddgKA9L6LNQHOQTogS7kuJi4VetGtwfGOD+SzKhFMm9g81NYrArXvvzX2AfmIS79x8iP94fH7z+BhxD0vjcCeeTBn0GBWQopWS5Y1mTEMGcaS1EHIoLK+3oQUlKGNa+8w6u30xkC3sfCTcd8N2X38A9LH0881S4sPLomJeHp/BrVhXKy8thaGDIr2mMz4+khZuwMR7G+CvTLr2i83G3rweV5aVITMmUXeVQMadkelByHd0la25qEn7VqgKVZyFH/kR0rIVpk1246aiHP/7hVcRkl6G3oxFndq/DK+98i5Bb0cgtrVKKjNGgQ5eiY+5u7sKvWXZY9iREJSVcXV3HEuNki9Xe2YuM6AB8suYdXHW/gagQP5w8fgK+Yck8g1oy9pxws5C9bqRvgLqaWsG3rC709PRwDTMzK5tHbMYFv60N1SWZ0Pn2M2zafRT+ATdgb++M+PR8JXNYPijMT5cvXZhmpcm7edqAmOgoODs7j13FkMlgGyP6rNgbWPvWy9i46xBs7exxZv92vPbKezC0dEV+Wa2SOUaySjltxuygqKpa/jltWkBCz3H/wQM8HZ1bljD5MKgMQm5e/rg2RAvc0FCPnMxUXsYjISkVhcUVkLZ3qiQgGmR6kBZ0zcICo6Ojgm9ZfbjF5sLqmhUnIUVHqqS1DeVFuQgJvInIuBQUFJdzk0w4nzTotKab9cbMZMjNyRV+xarDw4cPuaxmZeeMaUPkTyNfWjOyUuMQcDME2fklKC3KQ1hYGPJKq1WSO8lqZGQkTyidD7Hf7e3ibokHj+f+GQsBjZNQZUoIdh86j57+R8K3ZoyUpGTux6HNIlu0Zh7JoVwKiaSF57XQhlDnt6AbyiUlpdC9oIvGxkbhx69KDPQPwMLUjJM4RbcmTAJZkqKUzad8vlWZYfQ8bTTKZnd2chJ+/KpFelo6N3Ubmpp5wiHdC+OyqlC+gwbNXYuKNBJ6vaKiEpcvXkJt7Rw19ufDSI3wh6OrFwICvGFmYYXipm7hU0sGjZLQnc5G7P32Pfzlg5/Q2z93Dz9lo5oYG/P8HiIbWkzFTSNcyEkbhRLEKquYYBggLiZG+NGrGpQztGfXbp7ASafv5NCy+nmlTUTETmbYqRMnMTCg+Yuj2gLSXDzdPWBlacXlb7Ksqh9yUqd0lNOnzyAsNFTwyTNHaYIfvvzyB5S33+c/exgdxg86h9H1UDN3JjVGQk8f3kaInycO/bITn67biu57c9eECgoKcGj/fpw6fpwnhBUXl/AFI01I1QLTZiLyIcLKyMziBES+JdEMmwBd4qUM3wP79vFTlwpv0dwRuSj63xQ3Cc0nvU8mmJ+vH86fPYfNGzfxmkQiJkAhe1cXF2ZOWfC8NPnVF3LuTyWrWdnZsLx2Dbt37GRmnS4e3JeRyOwwgisHN+PTn45DTjl3yuPw7ptvwylKMxntGiOhtHCmCsbmIf6GLT78aj265khCBfn52LFVh+egUL4E1QQiu9vHxw/ZObl8c1CYs7uXDfZfivjQJklJTYObmztMrlxBbk6O8GNXNaiOtImRMU6PaTFUO9qcmbsWFlcRExPL87KIbGg+5YNOdNpQ5FczNzOHu5sb/12a262bNiExIUH4NasaRPIR4eFcVql0C+X8EOmQI39cVtn/U7AklckqJXuSrObl5vIKokbs4Dx98iT7/4fCj54Ggzi19Tu8990RjHuCuoqx5s03ccjYW/HBJYNGSEhakQFrW1cQ7VDFu/e+XI+egdl3+SssKMT2rVuVyrNKpVK4OLvwqwL2dna82Jm7mwdcXd14MSlbpi1ZW1rihr8/z98QMQEiIMo9OXX8BC++LgeVFyEisbG25jW6aW6dnZz5PDs6OrE5vc5Lf1BDAcpkV0QOO8E3/7wRSYmaL1WrbaDyMpSdT/NJgxIaSVbp7p69PcnqdW66UbOGgf6J+lJP2DoZ6Okxc/fULM3dUdid/wUv/O19VPfKyoCMSLLx1quv4qiJr+DZpcGSk9DjPgkcmCCXNMtSzeN8LDgJdc/SJ1SQl49tm7cidgo/Tj9btIz0dIQz7ejc6bP8NCezi04T2mwiJoNq05iy0/bkiRM8Y1wdyCFKtY7DQkK5b4IGrUNrS4vw0XFQdGwrM82Sk5KEb4lgICLJyGCyGhaGC2fP83UgWSVNcmhI9QFNFUWp8QBpRBRImCl6JUX4Zd2nWK9zEE4uXrDVp1ZTr8I+bPLhsVRYchLKiXDB5x+9i23b9+CX3Xvw7Wcf4M9//gs2bv8NURnVwsdVIpeRyHZmgsXGzLxAfQTbKMWCE1rEBMg8IOc+aUD37i1OSdmcrCxmmm3mprMI9YiMiOBuhpmACIo0IiIiSleZKe52SZGTmcETSa+d3IV33v8W9X2aOZiXnIQ6mmtxKySAt4wJDY/ApSO78Mqb78HJMxD1rdNfxMvPzeMERGUyZ4OgGzeQnZkpfFkEZIJ8xdCICzJV/1tMZGdmYQvTiKhciAjVoAu+pMHPFE9HRriPiA6Q+wMzJyLCUEcx1q/9EIZOss6/msCSk5AQ8d5mePPTb9E3OH14kE6H7Vu2MgKavQBTexXaACImY2h4iJcJJQKaygRbSOSzddzy80ZRI1KDkKDgWZEQgdwLhvr6nIjIDTET1BVn4cierThn4oT7w8+Fby8ZNE5CFdlxMLFywMCjqWvl5jDbeNtWIqDZaUByiJqQMsgHRE5oioLNVHAXCvl5edw0S4wXo2ZCzFYTkkNumlGqylTrea9TgltBfnB1cUNsau5ElExD0DgJPXs2yv0RU/EwOee26+goRcFmA9KEskRNaBxEQNQx9czJU7y7qiYgD9/PZ11XIuaiCclBUTNK2iUiUhc1e/L4ITrb2zAwqBkfkBAaJ6HpQFGV7Vu3zTvPhPp6Z4maEAflUxnqG+DMqVNLZoKpAxHRFqYRiUQ0AeopNlcSItChThruiWNTa0TaAq0mIQqlb9uyZd4ERBB9QjKQyk63r8+eOr1oUbDZgvKKSCOaq6m90jAfTUgOrumydT5x7Bg7aLRjndVBa0koOyuL+4AWymcQKGpCGH7CVHVDQ64BqVPVNQUKOoimmQzz1YTkIGe1sYEBTjKNSNMa71TQShLKzsweI6CFi54QCa1mxzRpQBTGPXuaNCDtVNFJ89VhptlUCairAXN1TKsCXZil9AvSiAYGtHPdtY6E8rgPSAeJC5ziv5od048fP+LhWyKgfi0xwdSBomZbNjIiWsUa0UKYY4qgPCLq+0Y+Im0xwRWhVSSUnS3TgJKSFpaACKvVMU0aEDmhzzECUrx7pM0oKirC1s2bV21plYUyxxQhS8cwwvGjR3FX4U6gNkBrSCgzI4NfRk1MWHgCIqxGc0yewHbuzNk5ln3QHAoLCqCzeQtioqOFb614LKQ5pgh5dYQTR48temb8bKAVJEQaCmVCL+blxtVmjlEY3uCyHs4zAlIVpn36qB+lhXkoLC7HvcGpE0U1BTLNyEcUExUlfGtFY6HNMUU8Gx3lrdNJI1IlF5qAxkmIyjyQCUYlWhcTq8kco75e+nICUhEF6+9qhMn541j/5Vr8+7+9gE17z6GmXXtORkXIwvebEbuKNKLFMMcUQXlEciLSBo1IoyREJti2LeQDWjwNSI6bq0QTkiUiMhPs9BmVtZJGnw4hwNYIzr4RqKurR0qYK/72u99j/yUnzK3VwOKjuKhoVZlmwYuoCcnBfUTGxjh+7NikulGagMZIKD0tjUfBkhc4CqYOqyFZkWx+MsEunD2ntqzDyOPbiIxIUCCc5zj+w4f4busJzK6i09KCNCJKXI2K1Nxt76XCYppjiqDwPdUtOnbkiEaJSCMkxJ3QOjpITU4RvrVoWOnm2ODgIPQuXuJ1nacucPUMzyZd1BvBmS1f4KCe05T397QB3FnNTLOVTkSLbY4pgipmUgPRY4ePaCyhcclJiIiATLDUlKUjIMJKNscGHw1C//JlpgGdnXUmdG99DnZs3Ynces21fJkNqJW0zubNvLLjSsVSmGOKIB+RmYkJJ6I7fX3CtxcdS0pCNLFEQMnJi+uEVoWVGqIfevxY5oSewgRTiyd3YG+ki5uxy6viZElJCXSYabZSiWixQvRTQV7al5tmS0xEcyIh6vNF4T0q0t0mlaLvdt+0nSDTU1K5DyhFAwREWA4h+qGhx+jt6YG0tRWdHZ3T5vaQE1r/0iXonjs/awJ69nQYkf5OCLylmfWYL7iPaOtWXod5pWGpfEJCkEZkbmo2RkRT+4goCba3t3dMVjtmLX+KmBUJUY9yymL19/WDl4cnbG2u864Vri6uCPD3R0RYOBrqG4S/xieUEhHTUtOEby0ZtNknVFJUjODAQPh4e8PV2QVW1yx5VxBvL28E3Qxk85bKCUcR1FKY+oHpnp89AeHZCO/A6RsSA3lFGamkCY1NEq33CylCFjXbjMiIlUVES+kTEoL7iMzMcPTwYZVEVMq00ODAICarPrx3GpdVWzt4e3ohkMkquVkGH82ufdeMSOjpyFNER0bxflLWVtbw9w9ATk4u79/V0NiEopJSRDBBoFY61L/ci/2Dbt+W1YvmYXhOQKmTP3SJoY2aUBObOwd7e1y1uAonRyfe06u8ohKN7PXqmlqkp2fCk80ltXyhRoQUUSRQ8zw9rgHNwQTDKBJ9bfDR229CZ/cBHDt4EL/9shM7fzuOzPJW4cNaj7LSMk5EK8lZrSlNSA65RnT00GH0jZlmkuZmODo44Kq5BW+hFRMdg7LyijFZrUN6Ribf93JZTWWWz0wxLQmRymVnY8sIxg6ZWdm8Lzk1EKSOkNQdkpoL8ra/7HVq3FZaVgYPT0+YsT/Ch53ke3fvWXIntCpoGwnRIlFt55CQUN7al5rdKXY3pbmlhoLUAI/mOi4+AaampvzEoVvRREKkDc0ao0PIS46FLzvJfNg6UUtiV0aAkQkZeKStiULTgE5n8jWuFNNM0yREIPfKVaZ0UMIrWTjmpubcYU6H49Sy2o6EhESYmJhwa4l8TdNhShLq6e7mXR/9/Pxl7WjVtFVWHLRh6DnqGrl18xa4ODkJP1Yj0CZzLCYqmtf1yc3L5+RNiymcR8VBc0+L3tDYCBtrG2zcsIEfDnPC8+VkcM0cxcyk3bZFBxHhEcK3lh00aY4pgkyzQweYprx3HwrZ/MqJRyifioP4QSarTbBlZhrJ63REpJaERtgvWjPVyotpM/ShtBGEX6hu0D+kg22uFHbaG+jrc8eVpqEtyYrkUL2oexFFY4sqnDv5/Alfo0EC0NLaBhub65xURUwGaUQUNbsVsbyJSBs0IUJFeTn09fRRQLLK9rNQHqcaJKukkFgx08zHy0v40ZOgloSibkXCkpEQkc9sCEg+eA94pp75+Pjy1rbqukguFbQhT+ju3TswNjJGQmISN2mFc8aHpIUvXouaOafFrWIqsb6eHhcSEZNRzuaEE9Ey1ojmmie0kDou1Z26YnwF8cy0Uiur0wySVXI1UAoJHRDqoJKEyBlFNWgy2KYl00r44TMd3F5k/xA6+auqqoRfM2cMP36I6twEWNu5ob59cnLeyNAjNJVnw97OEYW1Ewl42mCOxUbH4NpVS64lCueKz1dLG5pqS2BtYgjfW8loZlpPs4rnSIOiQABFMShdYrUgJ8IdRqaOeDDNn1xWWsoz8iPCw4VvLQsommMk6zWFKTC3coa0W3VBskfdtbh84hzym+ZooqsA9YSzMLdQq63PdBB/RDO5p2RIdbKqkoSozq+zkzNa2ImszjSY6aA/Iogxu5+vr9p/xGzRWp2Hc3t+wEtr1qNMMrkcQbekAuanduKFlz9FYlHb+OuaJiG612VmYor8/AKu6QjniYZE2ona4lTs37YBl6/7y0hIojz/9PsURaNIRE1NjfCrViTuSUqw7p0X8M2W41C9FSeDMqvJWR0RFiZ8S+tBJERRZYK0rgind/+Av771Deo7lP/yZ08ewdXgAP74P/6GxKqFyXonpzQdcLm5eWpldaaDtKHKqmoeMVOniCiR0PNnz3nE5ObNQG5OCT+UD0kLJyhiOSkbHUxdk0pVO6zIlCsvr8DF8xcw9HjhTLL0AHO88vYPKG9RvqZQl+KDV175DEkl7eOvabrQfUd7OwyYdtnY1KySWOTzyjXPpibUNzQpv68wSJtycnDi/oOVjtHBXrjbmGHH9x/jpz3nZkRCBArfExGFLzMiEmZMx/uY4fW3/oH6TmH9n6coSL6Fcwd24qO/f4qEqi7B+3NDF5MtAz0DJoONU8oq+ScpKkay2Kpm/8tl1cXZVa0fU4mEBh8+5MmHSUnJKk2xZomUfbEU2SkxuG5lCVdXV1y9Ygzv4Dg0tiif3ERClE906eJFlclPc0V6gAVef2e9ahJK9cXrr62dREKa9glRNwnKBZLNofLC0mu1lWUICfDAlWsOKC6rQesUkQg6ILy8fHjS2MrGKGL83XEzKhkexvvw067TEG7FqVDJDkDKU6Mw83KB0CcU52uGN//+hRIJddTm4bqjD3KSQ/H9Bx8htqJz0vtzBQVPKBdI3YHZLGlFW1sbCrJT4eHiDJMrJohJLVAbOSNZ9fX15yF7VVAioe4uxlrMFCsoKFRWxRgBdXS0I8zdEr/+dhzRqXmI8LXHW3/9K655RaGts1vJh0F/BDEqJeQ11NcLv27OSPdXT0K1KcokpOnoWFxMLG4E3ODzoXJhWxi5N5RDd+8GvP/NryiobFarXdKg0yWUnfCUIDY6Oir8uhWD6uw4vtEePH0GP+Nf8eOOU1Be8anBfURbdRAWGip8SyshjI7F+SiT0MiDXjhaWqCkpR+9lfH44p0PEF+5MJpQQlw8AvwDxvfvJNmTUAi+HeG+dtj321FEJ2XixPZ12HfOaiyFR7Ws3oq4BQ93d54IKYQSCXV1dnJ/UEFBkYCEWniYLivaF1988hns/OPQ/2gI8Tfs8OGHXyA6oxSdne1K/wA5CV1jJFRXWyv8ujmDSOiNZURC5JS+eSNQLQm1tHWiqTIPO79+H/su2qK5sxcSFc8pLmx4eAQ3nVUt7ErAQGcDXBzZidwnyzPxMdyDDbvOzqnuUWlJKS8hHB6q/abZtCQ0+hixge4ITynmP/aUx+HLNR8ipX5hLI342Dh+YMr3r6LctTI5TY/0wdeffQpbv2ikRvlh07of4cj4QNqm2n9Eshp5KxLurm4q75gqkRBV46P7S5TjQ/4e+Qe1tLZDUl+J45s+x7qdZ1AjvY073S0wP7kdP2w7gbLGTrS1KoeV6Y8gc+zypcv8cuZCQUZCP86YhDTtmKYyti5sXlUtLI32rh5kxwfhozffglNgAnp61fjjxoY8/YGy0lcmnuOWswE+WbsOxiZXYHT5In7+fA3bjB/iFCPphu7Zb7jKiopl4SMSJisKSeh2dTo2fP0F9h85xTOTj/+qg1df+Cs27jmO4Pic8d+bK6j/m7Ozs5I5Rq6YttZaHN30JV57+xNcd/KApZkZ/EPjIZG2q5RruaxSwrOnh4fgm2RQIiHKkvTy9OSX0SgNW/5BbR2dKMiIwFsvvAAT5xAMPn6E3MQgvP/KS7hw1QOtXcqmGA3yCVGq9yXdi7z28UIh88ZVvLFmAyqlD4RvoT7NH2+8/g+klE3YyJomoY6ODhgZGKKxUYWdzX7u6mzDDdtLeH/tesTlVKNNqkzowoV1c3NDUGCg8KtWDJrKc3hAwd/fHzf9fXFw4z/wwWffw9knFp33lNd9JqisqMR2nW3MNNNeIhKSUIKfBd5650s0dsvuCd7vkSLhFkWc/XAzMBjXjU7j7y++gpNGtsgurRv/vbmiu7sbhkxWyYJRzBGk6G19XjQ+eecN7DxtgcysXNQ1y/xDQvkUyirdgaRL7qqgREIEOilcXdw48cg/qI2ZaQXpIXjtT/8Hp644oLgwD6bnjuBvL/wNZ/XMEZuSjbpGZVOD7MSoqGi4ubgsmO/i2cgwIuzP4/d//hjZlR2TkrSejY4gP8wGv//D6whNqx5/T9OOaVntZwOUlZUrJX+SP6i1uRYXdnyNz77bAY/AaBSVV6p19NHrROzXbWx4KHq1wO3CZnyx8Qjme5SVl5VhByOi0OAQ4VtaAUXH9PPRJwi8fg5/+NNbKG7oVHnrprPoFt5/8TXE18gujc8XslZRBihhJqyiDEqkHWgsTsIX772OTUeuoLK6FpmpifDxD0ZlfaNK9wH9fm1dPb/cXlioum6VShKicPIVI2PkFxTyEBz/B7S2obG2EmbnDmDztl9gZuOE0NAgHNj6I84ZO6K4okFp0xAh0e8b6Onz9i0Lhfu3pQhxs8Su304iOasYwyMTNy8f9vcgIdAZu/YeQVhcJobG3gu8SSSkOU2IcqTIH+Ho6KSUgUokJGmqh53+STa3+xCelM20I4o0KhMQDTocYmNieRGqYQ1noi8dniPlpi3MrnthUPjWHEBERD6isBDtc1YrakIP73YgyNUKu/YcRVpBBR49Ufb/3W4shMHZCyiVzjR5YWqQrJIjmUp0KMoq7edWaQu8bAyx6afNMDS3goOTG9LySvjBqsoSIiWELrQSn6i7NaGShAh+Pr5wcnLmzunmsZNbQpuluQkFBQWorm9GS0sLKisrUM9UMlXXDMicCwsL53fQFtIUG3kyhCd8MZ4z1h7C09EJEhphWtLwMDkyn+MJe29k7D1tqKxITn9KYecXVwWZqNx3VleLsopqnmWujoCI6ElNNjUx1SiprgRUVVbyOlehIdqlESnmCT1hWsmTkTFZHxqeJOuLiZ6eXi6r2Tm5AlklxaINZSVFyMkv4hFzdakkJKt0kZWSdNOnqCWmloQePHjA7znR9QCKisnNLCIk0m4kjIDkSYv8/wX/APqH5+UV8Psn2pDVq+nomBypKSk8r4Lu1AjzsIjkp0r6krS2opXNPV0qdndzX7E34pcS5KzeuY2ZZlqkEQmjY5pCVkYm379k+k+SVUkLl0PpFDcqSDOiwJa7uwcc7OynvC2hloQIlLl7+dIlREVGjWVFTu2AokH/KFLhyJSjEgBUCkQboA2aEOF+fz927dgB3fO63FYWmmbqBgkBaUg+3r5Y/8MPC5pztdpBF4G3b9vOfTHaAGHGtKZA9ar27NrN24jX1NbymxHqSEdxkJJCWpAvs6aoCJq8MJo6TElChHom7MaGhjx3iBhRXlOE24ASmSNaftOeNgqZZaGhYbwKI5V//HXPHq0oraDp6BiBOmHQ9RXqB06hdWo+Fx+fILv+wrXLiTmVzysRP2miRcUlvISHk6MjjPQNcPrkSdzuXRhHpAhGREwj4qaZFjirhdExTYAsIWohRXvf18eHW0WxsXHcHzm1rHaiuKQU161tYGtjw2uSTYdpSYhwu7eX1z+mqxdU95iyqYmQyDdBOUB0opMnnVRaY0NjuDg6oaFBVmuaL+6Wrbil4RvNmjbH7g/c5wXp9S5fHveP5TF7my4KUq4HOe/oUirNJx9sbquqa5DBVGJ7Owfu2KOsa7kj+qqFBY4cOrSguVerHdXV1dixVYcRkWY1Ik2bY6QBUUrNxQsXxqt35uflw8LcDFeYZUMHJ90HVZTVaiarmWx/Odo78oqhVLiPeuHNBDMiITnIBKCNQM3SLl7Q5RvDhNmMVHCdnFhk8pQxMhJeVKW0+R06OhrNVp3rBdbRkWF+KsgHLcpj9vdNbiA4Neh3LjACou6owoL19+7dQ35+Prw9PfnC61/Wh+kVU55TRL9Dt49TkpJ5ZxNFUJb0NUZERw8enp9GNDqMznYpOnpu48noLP6oFQruI9LZxrURTUGTmhAdkJd0dXGZyaKQRKjDDt2B9PbyGt/zclmlhgvW1yyRnJiE9raJ6hUzwaxISA76h1JvIgrl0xfSaUwblBId1YHIiWq8aIqI5lRj+tlj2F8+hi2bNmPH9u3YycamnzfC1M4bj9X/qZNAGejUE4wqTAoXVRFEKvQsJYpR8hdVo7x7586UIXhy9lG3gyMHD443FpgNOhtK4WJnDWsbB6TmlWN4hn/TSgdp7+Ss1hQRaUoToj1M7gLyA9P/q8Moyer9+9zUkssqtZFWF4KfDnMiobmCp80zdVcTafNzcUy3lSfi1KnzcHX14IXhfT1csWHthzhpOrOrEnRykFPPQE9vSgKaD0YZ8Vtdu4bDjIhmY5o1FsZjwzdf4YpDIAaVr/OselRXVXHtPShw6YlIE5oQkYouEdDFi3g4BQEtBpaUhAgyB+DSE9FcMqa7m2vRdV/BfBrtw8mdmxGeK5l4TQ3ICX3+3DlehnUhc6RUgbQoy6tXuY+op2d6R+C9zkr88O6b2H7CAsqpbyLk4D4iDUTNlloT4hrQBV1uYs2pg8s8seQkRKBiUzuYuruU2apz9QkpojrFHz9tYRrH1M0D8ODhA2aCnYUhM8GEPqDFAl2JISI6fICZZj1Tl/kMMDuAP/zri7DxuoWspBhExCShd2BxiXK5ghIayQxfyjt6S6kJPRp8xAmIWkgtlrY+HTRCQgSeNk81XpYoW3UhomPOlw/gzFU/4cuTwE2w02c4AS31opKPyMbSihOR2pZAzwew67M38Pq7nyM4MhGRgV74/qO3sPmQHm7fl/djFaGISiIinW1LRkRLpQmRCXbh7HlOQFP5gBYbGiMhgixtnopNLb5pNt88oWcPWrDnp/UIy20UvjUOinTJCejREhOQHBQcsLK05ESkKkfj+cM6fPbyq9h7wWH8tcIIa/zuf7+EgMRShSdFKKK2ppZfeqUWyIuNpdCEZD4gGQEttQ9ICI2SEEEeEl1sjWi+JFSd6ION2w+jY0C1tsB9QGeYCaZHJphmTRvyEZGz+shB8hFNdlY/f9KBde++hf2XHcdfuystwet//COu+cYpPClCCLp+tHPb4ptmi01CsijYeehfmshZ0yQ0TkIESpsnH9FiZqvOKUQ/jmdwuHQAp664QVUg6QE7VYiAKF9iqXxA04E0onHTbBIRjcL84M/4Vuf4eIXC2035eP+1V+GfVKbwnAhVoKjZru07eFWGxcJimmPkeCYNiAho8KFmtHUhtIKECPz+jo7Oot1onkuIXo7HvTXYvv5H3EhWbjZITeLOnj7N669oygRTh+fPJ4hIUSPqqEjB1g3r4Z9QzrSmEYQ7G2LbPl103hdjZTMBta7hGtHNxdGIFuvuGGnruhSxZQSkiSiYOmgNCRHkuRmLoRHNxxxrKUvDJf0raLk9mWTIB3T29BmuAWmDWqsKz0ZHYWNlhUP7D/AmBnLUF2fCw80dQSHB8PUJQF3b1JcMRUwG1UuXEdHCa0SLYY4RAV04ywjoMmlA2kNABK0iIQIPibLFXeh+WvMhoeGhR7jPVFfFSw20qOSEJgKaa6boUmF09KmMiA4c4BnZcjx5dJ+XnR0SFaA5obamhptm6vppzRULTULkeKZ7i4rXhp4+GUK7VIqu3ruTHx4dRmNNBYqLi1FZ3YCh0clvLwa0joQIZJqRs3ohiWg+5pgQREBnT53mN4wfP9IOH9B0oPD9dWtrHPptP3q6Z55ZLWJqcB8ROzQpGXahsJDmmCwMTxrQRNb+48H7yEvww2cf/QOON1PGn33+dAgB1w1w+vI1lJaW4LrhORjZ+2P46eLeKdRKEiKQRrSQptl8NCFF3L17l/uAtNkEU4dxIiLTTEX4XsTcQBoR3TWj4MdCYKFIqH/s3iKZYIo+oIF7faguisI7//4yrP2Txl9vyovEB29/hJj8Jv6ztDgeX37wASLzZD8vFrSWhAjcR7RtYTSiuVzbEEKWB8Q0IAODZUdAclBmtQ0jInJWdyn4iETMD9xHtH37ghCRsAPrXDDQ3y9zQpMPSEXA5NHdWnzx9zdgM05CI/AzPYjXP9uG5rE+b88HWvHLt2vwi74HRhZRGdJqEiLwbFVKm5/njeb5akID9we4BnTFyAhPnkxzb0PLQUREGtHB/ftFIlpA1NbW8KqZNwIChG/NCvP1CVEeEGlAU10but9biX+8rUBCwwO4vOMTfL7tBHrkv/K0D6d3fo01P57Eg0UssaBBEnqGNkkDahskeDLN3yevAzyf0grzyRMiDejMqVO4Qj4gNYu67MBMM7vr13GAEZEwoVHE3FFTXY1d7NCcDxHNRxOSJ81OVzqGSOhzBRIafXgHx75/C9/tOoMxRYiewuW9G/Dql79h4NHiRS80QkKDt1vh4+GJ6PhERIX4weLqddR3TN2uhN9o1tGZ843muTqm7929ywmInNDL1QRTh+fPnvESnAd/EzWihUR9XR2P8N4MmFvUbK4+Ibq3eP7MGR4Fm4qACEJN6PkQM9+2fogvtp2c0ISe3cO5Pd/j/Z/PME1o8ewxjZCQj/lJ7DxsjKHR5xgduo/zv27AcRMP4WNKmCitMHuNaC4+IZ4HxKNgRitHAxKAm2ZjeUQiES0c6uZBRHPRhLgGdJZqV+mzw3JqAiIINSE8fwIP/T1486tdaLk3Fpcf7MD+9R9i9yXXlecTMti7Duu2nx6/AmF2TAcHLk9cqJwKFDWj3IzZZqvO1hyjmtByHxB1pFzJoCsetjbXceg3kYgWEhQ127NzF274z840m+21DZkPaHalY4YH6rH2zddgF5g2/lptVgje/fvHSCqVlRLub8jBuk8+RmB69fgziwGNkFBBtBveeenfoXvVE2nxYbh4/hKKG2YeMq4eS2iczY3msOBgFMywCyyF4U+fOAkTY+MZL+pKAPcRMdNMDN8vHOQJjQGz8BFFhIchNydH+LJKyK4NneEdWGbqLhjs70NmtCde/tOfcOiiJVq6+sDdsqOD8LW6jNOXLJCelgFXK0MYXHVB/yLn4mqEhMgpHe5shL/87r/hjy/8HUHJFcIHpgUt7nSlFeiEJ0IhM07v0mU42ttD0tSMhw/Up61TrVxqp8MTEVcRARHorpktI6KDZJp1dgrfHgfNS5tUylt7JyUmoriwCN1d3Xg6oup6rwhqECFzVqs3zUhWyf9Ijm3SaOxtbdHc1DRlnZ/x0jHMBBucgQkmx2D/bRRlpzKyi0BCUioknbdlJER4Ooic1ARE3YpCckYuBhYxKiaHRkjoUV8rXKxMcd3GCpu/eB8f/mMjsqs7hI9Nixp+o1m5tALZx7Q5qP2s6RUTuLm6wcPdA55suDi78A4h1Jq6uKgIQwpEQ4R15uQprgFp+1WMxQL3EalwVtMmoc1EnV8N2KlLfaV8vH3g5+sHTw9PNp/W3HdGZrLiHTURMpCzeteOnQjw95/0OjU3oG4q1MHGlMml65iserA5dXFxZbJowpsZFBYUTjoU5VEw0oCW+2GpARJ6Bg+T49h9woz/dK+1FJvWvovvd1zAozmQLiU07mbqLmlEtFGK2KlMvbxsr9siIzMLZeUVvOUyNWhrZFoQ9UsrKS1DYmISrllc5bfMJc3NPLmLomDUMXaqDherAZRZbcdOYiKi3p5eHnUJ8PPnWeIhISEoLCpGZVU17ztHc0q9pyrYz7m5efBnz1FFAeqqslqJXB1Ie9/NiIh8RCSrJSUluGpmzkj/OtIzMlFWVj4uq9TJVC6rSYykLBkRERk1NjTI7i2ekd1b1HTtqoWABkjoMY5v/BJHjCbKpCZ7GOPjT35G+xxzAKnYFN2Jol5JFubMnk3P4F0iqSOkqm6x9Bq9Rz9HRNziHVHJF0J9vMSNMwEXZ2fs37uP95cjbYdIR97iV1UHTnqd3i9lm8mKkTsRGZkMIiZAHY0pW/2iri4sGAGlpabNSFbp/yMjo3hveEoyJc1ppj4gbYcGSOgZ/K+dxYYth9Da9xAjI0NMMzqJI5ftMJ9UBAc7e+z79Vd+KlOravlpMtWgZ6gXfA47wUlVzsiYeURiNYDMMeq55u8XgI7OLr4RhHOoatCmoUGmL53eKz26OFsQuf+yew9qmdZDLb5nKqvUCz4vv4BrU6kpExdPlzs0QEJUQuIuYoK8YGlpw1tG+9wIQ1f/3O3aUqbWGjLVlNRX6us+aUO0dXCikUqlaGKmg3BxadDikilB92yotIUIWYlYe1s73LhxkxPQTDaK4qATnIa1lTX8fH2FH79qQS2vyI9DLb7bOibLqtKQtHD5pUO1tbWVyy+tRT4jImpQSDK9EqAREpKDnMLkVJuHAsR/n2zjpORkAQExlbapEdkZaYhgamxaVr5sIYULPTZoof38/OHMSFEEZI59pvLLCUU4XzMZZGaQT44c1nT1ZrXjCdMIaS6ol3sbkzfhfE0eLXze8zOTEREVh8LyakjG5Je0p4CAG3BymFlunbZDoyS0EEhPT+enrdyGHl9E9nNrSzNiQtzw6Zr3oWftj+7uLhWLLRv0u6RJUR9uam0rA9HjahuyyIsNm9O4uHh+8grnajaju6cXXp7e8Pb05JG31Qy6QE2dUMiZP51p2yptR3psCC6fO4OdmzbgoqUPWrtuQyKRySq5HahZoZQR03LHsich6iqRlJzCT13hQkqZZlSU5I+P3/0InjGFvAVOq5pTnUiMTh5/f39m2hkhMzsXKakZq2ukZSCL/d1ubh4w0DPg2qFwnhTni/w+3FE9xYaiZyjCc9XcQoHcVyeoumV8QqJKWVUcEkZAbZIqnNj5E4wdgpCRHIuYxGw0t7ajeewZklUylQP8pu6DtxywrEloYKAf5qZm3J9Dwj5pMSUtjIQ64WFyDJ9/twOlknZUV5Sjqq5RrX+DzLm0tHTs2f0LAm6GwMfv5qoavv40AqGrewm2tnbo6u5RmqOmJrZJWtvQ3s7IpagAWTn5aGhpZ4Q1sUGEgz6HKvtRSHq1goqKUTQsOztnGhJqRj2b46woL3y25gO43cpCK5NjInB6T/4cHbApKan8WtFyx7ImIcqZcHRw5H4Hod+iWdLKFq4Jx7atw66jRkiPv4WTB37BgTMmqGhoVnl6k3AQoZ04fgI+vgG4GRTKyCh41YwbgSHw9buBi7qXERYWruTkp0EE1FBfCTfbqzA2NYflVROcP6+HgPAYVNWz9yXKBE+BgWtXr82rntNyh0TSDEd7R5SWlivJqnyQzDY31iMjNQ6n923BG69/CDN7N6RkFcgCKwJZzcrK5n675V7falmTEGU8UzZ0bV29ko0tkXagvige6z79AAfPGME3MAIXDmzDG+99hfyqeqY5KQsCaVOU43L40GGuDR05chyHDx9dPePIMezb+xu262xn5pksf0W4SdqkLfC+dgbvvPc5wjPKUZYdjFf/5U84beaJxpY2Ru7KJER+JcoCpp7n3p5e8PbyZoP+uzpGgH8Av91OCYeUayWU1Ykhyw9qqMzBr+s/x7c6J5CWXYiK6lolcidZzS8o5PlYfbeXd6eUZU1CFO6kXBQKd0oEp0tb123EelvizRdfxDkLd/ZzK/QPbMa3W0+gprFVrSZUyIjt2NFjMDY2hZW1LSytbFbPYH+vqdlVHGGERE5pIQmRFtTSUIljGz7Gj3suomPgMWI8ruD1Nz9FUHIZejpVmxlEQvZ29vBh5EN3oyhzeHWNWkRFRvLkTZJVdZoQjZb2bnZ4JmPDp+9B3zEMHb19KqO6rWxtKL+NknOpmP1yxrImIbqjRFEcukbQMskn1ILe212wOL0Hb7/3DdLLGSlVprOFXYOz1oFo7+zmUQbhwpL5QSruwYOHEBQSgeDQCPbf8FUz6O8NDA6Dnp4hfHx8lBzTzYy4pa3N8DC/gN37zyAuLRPnftuGk3qWqG5mBCVR1oJoUITM2MgYJcXFwiVcNei/18/LpZD2ouS/VBidjHRi/O3w3pqPEZ5SiM5O1cEBOiDoqgfN63LHsiYhun9Dl1EzGHEontrNzBRrq83Hrm8/xd6LDui8+xDJQS74aM0H8LuVgLIa1c5pIqG42Djs/XUvbgaFjTlqV9e4ERgKfUNjfj2gp/f25DmSkLO/DXE3HLFnz144+4YhNTMXTcwMk6iYT74WElnU0cToCteCVivoPh75byjwocrXJptfKXqYxn5ddy8+X78PRbVSZv4qa0E0iMji4xJ4rfDljmVNQgS6GR8YGMQXRU4sbV29yIr2w0d/fwdu4em4//AeXM1O4bXX3oehqQ0yC6vYxhD4kMbMM7pMSCUOeJbq2PWDpR5EqPL7REs9yHQibZASQOmSqqKG2czIprOtCdfO7MJf/vo6fjt6AcHRafwZdZEx+ryE+ESefU2F4lYzyD9EYXU+XxJl0m5hh2dTZSF+XfcZDurZQ9rdB4mKOaXfpWFvaz+r4mfaimVPQpSsdUn3Ik80bBmztclezstMgoOjK4or6tHd3YGEcD/ontNDaGwGJ5xmgTlGmz4zMwuXLl7Ck+HlHW1YCJADmcp2jIfpJZQM2oyoG24wt7THDT9vHN75M95972NYuIejQ8XpTvMsbW/nkTHyiWgWz8dSMTWHdjYXlAxbUUmH4IRfqJHLbAc3W/OSw7D2vffhHJyCnh7ViaIkqzm5uVzutamn/Fyx7EmI4OftAycHJ1l2r0R+wsjMAMnYz7LTQ5bkJSQguVObTLvMjIzJH77EeHC3B5nxESioaqGGGBoDlTcx0NPjzk+6YiBhWlBDVRZ2fPcjwrNqcK+/n2lFzdDd9zO2HTPhl12Fm4W0yeioaF5ahermaATPn6A4Ixb650/j7AV9xGeXY5Ebik6JG/7+cLB34HMq04YYuTc38QJxtfWNCHYywtc/7EZBHdOIW5W1JX6AskF1stJSU4UfvyyxIkjo7p07/FJgaEgoz0mRmVYylVW+ePT/fAEFi0qkRIlfzk4ucGTCockb38OPBpEa5oEPX/4TjL2ThG8vORLj46Gvpz92MbgLzfWlOL9/Dy5fdUN2XiHiI0Ogf+4cAiKpdIogOsk2Gd34pqsF5WVlwo9eMuTFB+L4kcP8gNmxbi3+7c+vIDCtXGNaEdVmogTDoKBgmay2dqCrtRYGx37F8XOGOHnkCBwCYtmBquyQ5rLKtCAqfEaRNsWCfMsZK4KECHT7Xf/SZd5VgwiHnH90YggXUj6IkOgZyjFycnLmd3rozpQmMTI8hK7qLPy09i0YemqehAghwSHcP1RUXIL2zh5UlxcgMDAQ0bHxiIqKRFJa3rjfiOad/Eq0UcgBS7kxaWlpwo9cMgz2NsPb3QUlkn7+81BPFX768CV8f8Acw6OCh5cQXd3djNz14O8fwOWwq7MdSVHBcHJ2Q2hUEppayWekLKt0X8zVxRWWzLwlMlspWDEkRKC7YVfNzWFjbYO09Ay+gHTakJlGi0inM/0/DSKfhIRE7q/wcHOftk/TUuFZXy22fPmu1pAQRXXi4+Kgd+kSP72raurQe7uXmVod6OjuRc/t2/zUpnkmAioqKuYlX6lQXEF+vvDjlhSP+u9wP8sEhqG3dz2++ZXaTSm8rAH09vZyMrGyskJqWgbXxika2dt3h88nySuXVTavRD5UCZSSHd1cXfFwirrTyxErioQIlMJ+KyKCVwMktdXH25dfQaBFpBIKwexk9/Lw4slzRFh5ubnCj9AonnRXYfMXa2DopR0kJAcVXbdmG4Y2gqenN27eDERsbBwvPRoVFc3LoNApTfejKAp0p0/7snifDrTgt03f43qQdlwfGRkZ4Q57uaz6MvKekNVEBIeEsrn24gX7aF5zsrOFH7EisOJISA7SbNKZKeDr4wN3Nze4OruwTeICd7bYdPOYHIEjT5emO8RA/wC/YjITf5O2kpAcjY2NCAtlm8PDg5/KVCXQjZGPh7s731BtUm29Kf8cyUFOOHPZCncealf0k8q0UqhdJqvu/BaAq7Mrv5Lkz4iJDsrlfj9sKqxYElIEJTVS65SlNrmo4BoVfP95/QZeiJ+qFU6HJ92VMhLSEnNsKlA9broysBxSGporc2Bmdg2SXu02ZSbJqqa850uMVUFCSw3K3YiLicXWTZvx3/+//4Yfvvt+xpcM5SRk5JUsfEvEHNHf0QBvD2+09smjSc9xf3BlRJZWAkQSWkCQ5hMXG8s7bv7r7/+A//r//mf88X//HrHRMcJH1eLZ7Wr89Nmb0PPQfk1oOaC/qx4GJw/DzisYhQUFyM3OQqi/J7KqtNVsXH0QSWgBQGZJdGQUdupsw5/+8C/45//yT/jdf/8f+Od/+q+8Zc7w0PS+IMLQg7tIDvXEhq8+xkFda9Q2tk10xhQxazwdvAtPs1P46IOPsO67dUwj/Q7ffvk5Nv16Fl0DM1sTEYsPkYTmAYpuZGVm8SaBb7zyKv7tj/+KP/yv3+H3bPzPf/7/8dJf/8Yd4DPF0ydD6Gij2+gStLZIcbf/wWpxCywKno0Mob1VgsbGJjQ1NnKnOnWR7exbOTk2KwEiCc0DvT093NSiaFE2IyOKbLz/zhr8n3/5I9eCqE+4CBEipoZIQguEhoYGnDh6lLd0ee2ll/Hqiy+hvq5e+JgIESIEEEloAVBWVoad27YjIS4ONdU13ClNiZAiRIiYHiIJzRNlpaXYobON5wERMjIy8MVna9Ha0jL5QREiRKiESELzQHl5OScg8gnJQeUVHOzsFJ4SIULEVBBJaI6orKjE9q06CA0JmfT63bt3eV1gESJEzAwiCc0BpWMmWEhQsPAtESJEzBIiCc0SpSUl2EEaULBIQCJELAREEpoFqM8ZmWB0KVWECBELA5GEZojy0jLs2LYNYSETTmgRIkTMHyIJzRBUsD0+Nlb4sggRIuaJ/wtkIy/qVlWJaQAAAABJRU5ErkJggg==)

9 14

1 2 4

1 8 8

2 3 8

2 8 11

3 4 7

3 6 4

3 9 2

4 5 9

4 6 14

5 6 10

6 7 2

7 8 1

7 9 6

8 9 7

_Output:_

Edge Cost

8--7 1

7--6 2

3--9 2

1--2 4

3--6 4

3--4 7

1--8 8

4--5 9

_Total Weight of the Spanning Tree:_ 37

**Lab Day 7 : Greedy Techniques (Cont…) – Single Source Shortest path**

**7.1** _Aim of the program:_ Given a directed graph G (V, E) and a starting vertex ‘s’.

- Determine the lengths of the shortest paths from the starting vertex ‘s’ to all other vertices in the graph G using Dijkstra’s Algorithm.
- Display the shortest path from the given source ‘s’ to all other vertices.

_Note#_ Nodes will be numbered consecutively from 1 to n (user input), and edges will have varying distances or lengths. The graph G can be read from an input file “inDiAdjMat1.dat” that contains non-negative cost adjacency matrix. The expected output could be as per the sample format.

Content of the input file “inDiAdjMat1.dat” could be

| 0   | 10  | 0   | 5   | 0   |
| --- | --- | --- | --- | --- |
| 0   | 0   | 1   | 2   | 0   |
| 0   | 0   | 0   | 0   | 4   |
| 3   | 0   | 9   | 0   | 2   |
| 7   | 0   | 6   | 0   | 0   |

![](data:image/png;base64,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)

_Input:_

Enter the Number of Vertices: 5

Enter the Source Vertex: 1

_Output:_

| Source | Destination | Cost | Path |
| --- | --- | --- | --- |
| 1   | 1   | 0   | \-  |
| 1   | 2   | 8   | 1->4->2 |
| 1   | 3   | 9   | 1->4->2->3 |
| 1   | 4   | 5   | 1->4 |
| 1   | 5   | 7   | 1->4->5 |

**Lab Day 8: Dynamic Programming**

**8.1** _Aim of the program:_ Write a program to implement the matrix chain multiplication problem using M-table & S-table to find optimal parenthesization of a matrix-chain product. Print the number of scalar multiplications required for the given input.

_Note#_ Dimensions of the matrices can be inputted as row and column values. Validate the dimension compatibility.

_Input:_

Enter number of matrices: 4

Enter row and col size of A1: 30 35

Enter row and col size of A2: 35 15

Enter row and col size of A3: 15 5

Enter row and col size of A4: 5 10

_Output:_

M Table:

0 15750 7875 9375

0 0 2625 4375

0 0 0 750

0 0 0 0

S Table:

0 1 1 3

0 0 2 3

0 0 0 3

0 0 0 0

Optimal parenthesization: ( ( A1 (A2 A3)) A4)

The optimal ordering of the given matrices requires 9375 scalar multiplications.

**8.2** _Aim of the program:_ Write a program to find out the Longest Common Subsequence of two given strings. Calculate length of the LCS.

_Input:_

Enter the first string into an array: 10010101

Enter the second string into an array: 010110110

_Output:_

LCS: 100110

_LCS Length:_ 6

**Lab Day 9: Dynamic Programming - All Pair Shortest path**

**9.1** _Aim of the program:_ Given a directed weighted graph G (V, E) where weight indicates distance. Vertices will be numbered consecutively from 1 to n (user input), and edges will have varying distances or lengths.

- Determine the length of the shortest path between every pair of vertices using Floyd-Warshall’s algorithm.
- Display the intermediate vertices on the shortest-path from the given pair of vertices (u,v).

_Note#_ The graph G can be read from an input file “inDiAdjMat2.dat” that contains cost adjacency matrix. The expected output could be a shorted-path weight matrix and the path consisting of intermediate vertices.

![](data:image/png;base64,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)Content of the input file “inDiAdjMat2.dat” could be

| 0   | 3   | 8   | 0   | \-4 |
| --- | --- | --- | --- | --- |
| 0   | 0   | 0   | 1   | 7   |
| 0   | 4   | 0   | 0   | 0   |
| 2   | 0   | \-5 | 0   | 0   |
| 0   | 0   | 0   | 6   | 0   |

_Input:_

_Number of Vertices:_ 5

_Enter the source and destination vertex:_ 2 5

_Output:_

| 0   | 1   | \-3 | 2   | \-4 |
| --- | --- | --- | --- | --- |
| 3   | 0   | \-4 | 1   | \-1 |
| 7   | 4   | 0   | 5   | 3   |
| 2   | \-1 | \-5 | 0   | \-2 |
| 8   | 5   | 1   | 6   | 0   |

_Shortest Path from vertex 2 to vertex 5:_ 2-->4-->1-->5

_Path weight:_ \-1

**Lab Day 10: Amortization:**

**10.1** _Aim of the program:_ Write a program to implement randomized quicksort. Explain the expected time complexity of this algorithm.

**10.2** _Aim of the program:_ We represent integers as the sum of Fibonacci numbers. In other words, instead of an array of bits, we keep an array of fits, where the ith least significant fit indicates whether the sum includes the ith Fibonacci number Fi .

For example, the fitstring 101110 represents the number F6 + F4 + F3 + F2 = 8 + 3 + 2 + 1 = 14. Write a program to increment and decrement a single fitstring in constant amortized time. \[Hint: Most numbers can be represented by more than one fitstring\]

**10.3** _Aim of the program_ : we want to store a big binary counter in an array A. All the entries start at 0 and at each step we will be simply incrementing the counter. Let’s say our cost model is: whenever we increment the counter, we pay 1 for every bit we need to flip. Now we not only wish to increment a counter but also to reset it to 0 (i.e., make all bits in it 0). Counting the time to examine or modify a bit as θ(1) show how to implement a counter as an array of bits so that any sequence of n INCREMENT and RESET operations takes O(n) time on an initially zero counter. (Hint: Keep a pointer to the high-order 1.)

Example: A binary counter with 5 bits.

| Bit 4 | Bit 3 | Bit 2 | Bit 1 | Bit 0 | Operation | Cost |
| --- | --- | --- | --- | --- | --- | --- |
| 0   | 0   | 0   | 0   | 0   | Intial | 0   |
| 0   | 0   | 0   | 0   | 1   | Increment | 1   |
| 0   | 0   | 0   | 1   | 0   | Increment | 2   |
| 0   | 0   | 0   | 0   | 0   | Reset | 3   |
| 0   | 0   | 0   | 0   | 1   | Increment | 4   |
| 0   | 0   | 0   | 0   | 0   | Reset | 5   |
