/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "module_types.h"

#include "module_reflection.h"

#include <algorithm>
#include <string.h>



int _kCityValues[] = {
  NYC,
  MPK,
  SEA,
  LON
};

const char* _kCityNames[] = {
  "NYC",
  "MPK",
  "SEA",
  "LON"
};

const std::map<int, const char*> _City_VALUES_TO_NAMES(apache::thrift::TEnumIterator<int>(4, _kCityValues, _kCityNames), apache::thrift::TEnumIterator<int>(-1, NULL, NULL));

const std::map<const char*, int, apache::thrift::ltstr> _City_NAMES_TO_VALUES(apache::thrift::TEnumInverseIterator<int>(4, _kCityValues, _kCityNames), apache::thrift::TEnumInverseIterator<int>(-1, NULL, NULL));


namespace apache { namespace thrift {
template<>
const char* TEnumTraitsBase< ::City>::findName( ::City value) {
return findName( ::_City_VALUES_TO_NAMES, value);
} 

template<>
bool TEnumTraitsBase< ::City>::findValue(const char* name,  ::City* out) {
return findValue( ::_City_NAMES_TO_VALUES, name, out);
} 
}} // apache::thrift 


int _kCompanyValues[] = {
  FACEBOOK,
  WHATSAPP,
  OCULUS,
  INSTAGRAM
};

const char* _kCompanyNames[] = {
  "FACEBOOK",
  "WHATSAPP",
  "OCULUS",
  "INSTAGRAM"
};

const std::map<int, const char*> _Company_VALUES_TO_NAMES(apache::thrift::TEnumIterator<int>(4, _kCompanyValues, _kCompanyNames), apache::thrift::TEnumIterator<int>(-1, NULL, NULL));

const std::map<const char*, int, apache::thrift::ltstr> _Company_NAMES_TO_VALUES(apache::thrift::TEnumInverseIterator<int>(4, _kCompanyValues, _kCompanyNames), apache::thrift::TEnumInverseIterator<int>(-1, NULL, NULL));


namespace apache { namespace thrift {
template<>
const char* TEnumTraitsBase< ::Company>::findName( ::Company value) {
return findName( ::_Company_VALUES_TO_NAMES, value);
} 

template<>
bool TEnumTraitsBase< ::Company>::findValue(const char* name,  ::Company* out) {
return findValue( ::_Company_NAMES_TO_VALUES, name, out);
} 
}} // apache::thrift 


const uint64_t Internship::_reflection_id;
void Internship::_reflection_register(::apache::thrift::reflection::Schema& schema) {
   ::module_reflection_::reflectionInitializer_9022508676980868684(schema);
}

bool Internship::operator == (const Internship & rhs) const {
  if (!(this->weeks == rhs.weeks))
    return false;
  if (!(this->title == rhs.title))
    return false;
  if (!(this->employer == rhs.employer))
    return false;
  return true;
}

uint32_t Internship::read(apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  apache::thrift::protocol::TType ftype;
  int16_t fid;

  ::apache::thrift::reflection::Schema * schema = iprot->getSchema();
  if (schema != nullptr) {
     ::module_reflection_::reflectionInitializer_9022508676980868684(*schema);
    iprot->setNextStructType(Internship::_reflection_id);
  }
  xfer += iprot->readStructBegin(fname);

  using apache::thrift::protocol::TProtocolException;



  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->weeks);
          this->__isset.weeks = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->title);
          this->__isset.title = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == apache::thrift::protocol::T_I32) {
          int32_t ecast13;
          xfer += iprot->readI32(ecast13);
          this->employer = (Company)ecast13;
          this->__isset.employer = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

void Internship::__clear() {
  weeks = 0;
  title = "";
  employer = static_cast<Company>(0);
  __isset.__clear();
}
uint32_t Internship::write(apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("Internship");
  xfer += oprot->writeFieldBegin("weeks", apache::thrift::protocol::T_I32, 1);
  xfer += oprot->writeI32(this->weeks);
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldBegin("title", apache::thrift::protocol::T_STRING, 2);
  xfer += oprot->writeString(this->title);
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldBegin("employer", apache::thrift::protocol::T_I32, 3);
  xfer += oprot->writeI32((int32_t)this->employer);
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(Internship &a, Internship &b) {
  using ::std::swap;
  (void)a;
  (void)b;
  swap(a.weeks, b.weeks);
  swap(a.title, b.title);
  swap(a.employer, b.employer);
  swap(a.__isset, b.__isset);
}

void merge(const Internship& from, Internship& to) {
  using apache::thrift::merge;
  if (from.__isset.weeks) {
    merge(from.weeks, to.weeks);
    to.__isset.weeks = true;
  }
  if (from.__isset.title) {
    merge(from.title, to.title);
    to.__isset.title = true;
  }
  if (from.__isset.employer) {
    merge(from.employer, to.employer);
    to.__isset.employer = true;
  }
}

void merge(Internship&& from, Internship& to) {
  using apache::thrift::merge;
  if (from.__isset.weeks) {
    merge(std::move(from.weeks), to.weeks);
    to.__isset.weeks = true;
  }
  if (from.__isset.title) {
    merge(std::move(from.title), to.title);
    to.__isset.title = true;
  }
  if (from.__isset.employer) {
    merge(std::move(from.employer), to.employer);
    to.__isset.employer = true;
  }
}


