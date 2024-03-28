#include "sampledatabase.h"
#include "sampletable.h"

SampleDataBase::SampleDataBase() : Nut::Database()
  , m_posts(new Nut::TableSet<sampleTable>(this))
{

}
