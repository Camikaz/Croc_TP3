
// ===========================================================================
//                                  Includes
// ===========================================================================
#ifndef DLAAA__
#define DLAAA__

class DLA {
 public :
   // =========================================================================
  //                               Attribut classe
  // =========================================================================
  
 
  // =========================================================================
  //                               Constructors
  // =========================================================================
  DLA();
  DLA(int L);
  
  // =========================================================================
  //                                Destructor
  // =========================================================================

  // =========================================================================
  //                                  Getters
  // =========================================================================
 
  // =========================================================================
  //                                  Setters
  // =========================================================================

  // =========================================================================
  //                                 Operators
  // =========================================================================

  // =========================================================================
  //                              Public Methods
  // =========================================================================
 inline char** tab() const;
 
protected :
  // =========================================================================
  //                             Protected Methods
  // =========================================================================

  // =========================================================================
  //                                Attributes
  // =========================================================================
  char** tab_;
};

// ===========================================================================
//                            Getters' definitions
// ===========================================================================
inline char** DLA::tab() const{
 return tab_; 
}
// ===========================================================================
//                            Setters' definitions
// ===========================================================================

// ===========================================================================
//                           Operators' definitions
// ===========================================================================

// ===========================================================================
//                        Inline functions' definition
// ===========================================================================

#endif
