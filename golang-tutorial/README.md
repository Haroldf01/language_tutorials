- Go doesn't have classes, it does have methods.
- The methods are not defined within the struct, however.
- Instead, they're associated with the struct.
- You can either let these methods just access data via working as a copy of the struct, or you can actually point through and modify the object.
- Methods that just access values are called "Value Receivers" and
- Methods that can modify information are called "Pointer Receivers".