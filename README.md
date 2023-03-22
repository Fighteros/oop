# Object oriented programming & DataStructures

---

## OOP

- java directory contains code for oop and Data Structures
- data structure course summarized from Mohamed Essa
-
  
##### Sample

```

public class fib {

    public static void main(String[] args) {
        int x = 5;
        System.out.println("Number" + x  + "fib" + fib(x));
    }


    public static int fib(int n){
        if(n < 2){
            return n;
        }
        return fib(n -1)+ fib(n -2 );
    }
}

```

#### Java dir Structure

```
└───java
    ├───.idea
    ├───java
    │   └───src
    ├───out
    │   └───production
    │       └───oop
    │           └───com
    │               └───pack
    │                   └───oop
    └───src
        └───com
            └───pack
                └───oop

```

### Seqeunce

1. every video will be summarized in a dir with the name.
2. every dir will contain a ```README.md``` file

---

_All thanks to Moahmed Essa for his contributions_
_Ahmed M. Abd ElGhany &copy; 2023_
