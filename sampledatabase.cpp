#include "sampledatabase.h"
#include "sampletable.h"

SampleDataBase::SampleDataBase() : Nut::Database()
  , m_weapons(new Nut::TableSet<sampleTable>(this))
{

}
