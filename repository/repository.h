/*

Order of things to do:

  Conventions
  
  Dispatch
    Super, along with subtypes for functions, structs, and variables. 
    Currently, no way to track namespaces, but should be unecessary
    by the implementation of the prior 3.
    Implementation: A generic templated struct that will have explicit, full instantiations for each reflection type.
    Variable and function structs will each have their parent type as a parameter, along with their names
    
    Idea for runtime polymorphism: static create() function that adds to types instantiation representing global namespace. 
    As for local variables, can be returned by a member() templated function (that sadly has to be defined by every struct).
    Base implementation could throw an error or return nullptr.
    
    
*/
