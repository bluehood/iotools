//////////////////////////////////////////////////////////
//   This class has been generated by TFile::MakeProject
//     (Thu Aug 10 16:20:25 2017 by ROOT version 6.10/04)
//      from the StreamerInfo in file AOD.root
//////////////////////////////////////////////////////////


#ifndef xAOD__CaloCluster_v1_h
#define xAOD__CaloCluster_v1_h
namespace xAOD {
class CaloCluster_v1;
} // end of namespace.

#include "Rtypes.h"
#include "xAOD__IParticle.h"

namespace xAOD {
class CaloCluster_v1 : public xAOD::IParticle {

public:
// Nested classes declaration.

public:
// Data Members.
   unsigned int m_samplingPattern;    //

   CaloCluster_v1();
   CaloCluster_v1(const CaloCluster_v1 & );
   virtual ~CaloCluster_v1();

};
} // namespace
#endif