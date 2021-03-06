// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: deck.proto

#ifndef PROTOBUF_deck_2eproto__INCLUDED
#define PROTOBUF_deck_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace Hackers_Project {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_deck_2eproto();
void protobuf_AssignDesc_deck_2eproto();
void protobuf_ShutdownFile_deck_2eproto();

class deck_data;

// ===================================================================

class deck_data : public ::google::protobuf::Message {
 public:
  deck_data();
  virtual ~deck_data();

  deck_data(const deck_data& from);

  inline deck_data& operator=(const deck_data& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const deck_data& default_instance();

  void Swap(deck_data* other);

  // implements Message ----------------------------------------------

  deck_data* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const deck_data& from);
  void MergeFrom(const deck_data& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required string name = 1;
  inline bool has_name() const;
  inline void clear_name();
  static const int kNameFieldNumber = 1;
  inline const ::std::string& name() const;
  inline void set_name(const ::std::string& value);
  inline void set_name(const char* value);
  inline void set_name(const char* value, size_t size);
  inline ::std::string* mutable_name();
  inline ::std::string* release_name();
  inline void set_allocated_name(::std::string* name);

  // repeated string program_names = 2;
  inline int program_names_size() const;
  inline void clear_program_names();
  static const int kProgramNamesFieldNumber = 2;
  inline const ::std::string& program_names(int index) const;
  inline ::std::string* mutable_program_names(int index);
  inline void set_program_names(int index, const ::std::string& value);
  inline void set_program_names(int index, const char* value);
  inline void set_program_names(int index, const char* value, size_t size);
  inline ::std::string* add_program_names();
  inline void add_program_names(const ::std::string& value);
  inline void add_program_names(const char* value);
  inline void add_program_names(const char* value, size_t size);
  inline const ::google::protobuf::RepeatedPtrField< ::std::string>& program_names() const;
  inline ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_program_names();

  // repeated string cpu_names = 3;
  inline int cpu_names_size() const;
  inline void clear_cpu_names();
  static const int kCpuNamesFieldNumber = 3;
  inline const ::std::string& cpu_names(int index) const;
  inline ::std::string* mutable_cpu_names(int index);
  inline void set_cpu_names(int index, const ::std::string& value);
  inline void set_cpu_names(int index, const char* value);
  inline void set_cpu_names(int index, const char* value, size_t size);
  inline ::std::string* add_cpu_names();
  inline void add_cpu_names(const ::std::string& value);
  inline void add_cpu_names(const char* value);
  inline void add_cpu_names(const char* value, size_t size);
  inline const ::google::protobuf::RepeatedPtrField< ::std::string>& cpu_names() const;
  inline ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_cpu_names();

  // repeated string memory_names = 4;
  inline int memory_names_size() const;
  inline void clear_memory_names();
  static const int kMemoryNamesFieldNumber = 4;
  inline const ::std::string& memory_names(int index) const;
  inline ::std::string* mutable_memory_names(int index);
  inline void set_memory_names(int index, const ::std::string& value);
  inline void set_memory_names(int index, const char* value);
  inline void set_memory_names(int index, const char* value, size_t size);
  inline ::std::string* add_memory_names();
  inline void add_memory_names(const ::std::string& value);
  inline void add_memory_names(const char* value);
  inline void add_memory_names(const char* value, size_t size);
  inline const ::google::protobuf::RepeatedPtrField< ::std::string>& memory_names() const;
  inline ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_memory_names();

  // required string psu_name = 5;
  inline bool has_psu_name() const;
  inline void clear_psu_name();
  static const int kPsuNameFieldNumber = 5;
  inline const ::std::string& psu_name() const;
  inline void set_psu_name(const ::std::string& value);
  inline void set_psu_name(const char* value);
  inline void set_psu_name(const char* value, size_t size);
  inline ::std::string* mutable_psu_name();
  inline ::std::string* release_psu_name();
  inline void set_allocated_psu_name(::std::string* psu_name);

  // @@protoc_insertion_point(class_scope:Hackers_Project.deck_data)
 private:
  inline void set_has_name();
  inline void clear_has_name();
  inline void set_has_psu_name();
  inline void clear_has_psu_name();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* name_;
  ::google::protobuf::RepeatedPtrField< ::std::string> program_names_;
  ::google::protobuf::RepeatedPtrField< ::std::string> cpu_names_;
  ::google::protobuf::RepeatedPtrField< ::std::string> memory_names_;
  ::std::string* psu_name_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(5 + 31) / 32];

  friend void  protobuf_AddDesc_deck_2eproto();
  friend void protobuf_AssignDesc_deck_2eproto();
  friend void protobuf_ShutdownFile_deck_2eproto();

  void InitAsDefaultInstance();
  static deck_data* default_instance_;
};
// ===================================================================


// ===================================================================

// deck_data

// required string name = 1;
inline bool deck_data::has_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void deck_data::set_has_name() {
  _has_bits_[0] |= 0x00000001u;
}
inline void deck_data::clear_has_name() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void deck_data::clear_name() {
  if (name_ != &::google::protobuf::internal::kEmptyString) {
    name_->clear();
  }
  clear_has_name();
}
inline const ::std::string& deck_data::name() const {
  return *name_;
}
inline void deck_data::set_name(const ::std::string& value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(value);
}
inline void deck_data::set_name(const char* value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(value);
}
inline void deck_data::set_name(const char* value, size_t size) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* deck_data::mutable_name() {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  return name_;
}
inline ::std::string* deck_data::release_name() {
  clear_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = name_;
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void deck_data::set_allocated_name(::std::string* name) {
  if (name_ != &::google::protobuf::internal::kEmptyString) {
    delete name_;
  }
  if (name) {
    set_has_name();
    name_ = name;
  } else {
    clear_has_name();
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// repeated string program_names = 2;
inline int deck_data::program_names_size() const {
  return program_names_.size();
}
inline void deck_data::clear_program_names() {
  program_names_.Clear();
}
inline const ::std::string& deck_data::program_names(int index) const {
  return program_names_.Get(index);
}
inline ::std::string* deck_data::mutable_program_names(int index) {
  return program_names_.Mutable(index);
}
inline void deck_data::set_program_names(int index, const ::std::string& value) {
  program_names_.Mutable(index)->assign(value);
}
inline void deck_data::set_program_names(int index, const char* value) {
  program_names_.Mutable(index)->assign(value);
}
inline void deck_data::set_program_names(int index, const char* value, size_t size) {
  program_names_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
}
inline ::std::string* deck_data::add_program_names() {
  return program_names_.Add();
}
inline void deck_data::add_program_names(const ::std::string& value) {
  program_names_.Add()->assign(value);
}
inline void deck_data::add_program_names(const char* value) {
  program_names_.Add()->assign(value);
}
inline void deck_data::add_program_names(const char* value, size_t size) {
  program_names_.Add()->assign(reinterpret_cast<const char*>(value), size);
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
deck_data::program_names() const {
  return program_names_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
deck_data::mutable_program_names() {
  return &program_names_;
}

// repeated string cpu_names = 3;
inline int deck_data::cpu_names_size() const {
  return cpu_names_.size();
}
inline void deck_data::clear_cpu_names() {
  cpu_names_.Clear();
}
inline const ::std::string& deck_data::cpu_names(int index) const {
  return cpu_names_.Get(index);
}
inline ::std::string* deck_data::mutable_cpu_names(int index) {
  return cpu_names_.Mutable(index);
}
inline void deck_data::set_cpu_names(int index, const ::std::string& value) {
  cpu_names_.Mutable(index)->assign(value);
}
inline void deck_data::set_cpu_names(int index, const char* value) {
  cpu_names_.Mutable(index)->assign(value);
}
inline void deck_data::set_cpu_names(int index, const char* value, size_t size) {
  cpu_names_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
}
inline ::std::string* deck_data::add_cpu_names() {
  return cpu_names_.Add();
}
inline void deck_data::add_cpu_names(const ::std::string& value) {
  cpu_names_.Add()->assign(value);
}
inline void deck_data::add_cpu_names(const char* value) {
  cpu_names_.Add()->assign(value);
}
inline void deck_data::add_cpu_names(const char* value, size_t size) {
  cpu_names_.Add()->assign(reinterpret_cast<const char*>(value), size);
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
deck_data::cpu_names() const {
  return cpu_names_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
deck_data::mutable_cpu_names() {
  return &cpu_names_;
}

// repeated string memory_names = 4;
inline int deck_data::memory_names_size() const {
  return memory_names_.size();
}
inline void deck_data::clear_memory_names() {
  memory_names_.Clear();
}
inline const ::std::string& deck_data::memory_names(int index) const {
  return memory_names_.Get(index);
}
inline ::std::string* deck_data::mutable_memory_names(int index) {
  return memory_names_.Mutable(index);
}
inline void deck_data::set_memory_names(int index, const ::std::string& value) {
  memory_names_.Mutable(index)->assign(value);
}
inline void deck_data::set_memory_names(int index, const char* value) {
  memory_names_.Mutable(index)->assign(value);
}
inline void deck_data::set_memory_names(int index, const char* value, size_t size) {
  memory_names_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
}
inline ::std::string* deck_data::add_memory_names() {
  return memory_names_.Add();
}
inline void deck_data::add_memory_names(const ::std::string& value) {
  memory_names_.Add()->assign(value);
}
inline void deck_data::add_memory_names(const char* value) {
  memory_names_.Add()->assign(value);
}
inline void deck_data::add_memory_names(const char* value, size_t size) {
  memory_names_.Add()->assign(reinterpret_cast<const char*>(value), size);
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
deck_data::memory_names() const {
  return memory_names_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
deck_data::mutable_memory_names() {
  return &memory_names_;
}

// required string psu_name = 5;
inline bool deck_data::has_psu_name() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void deck_data::set_has_psu_name() {
  _has_bits_[0] |= 0x00000010u;
}
inline void deck_data::clear_has_psu_name() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void deck_data::clear_psu_name() {
  if (psu_name_ != &::google::protobuf::internal::kEmptyString) {
    psu_name_->clear();
  }
  clear_has_psu_name();
}
inline const ::std::string& deck_data::psu_name() const {
  return *psu_name_;
}
inline void deck_data::set_psu_name(const ::std::string& value) {
  set_has_psu_name();
  if (psu_name_ == &::google::protobuf::internal::kEmptyString) {
    psu_name_ = new ::std::string;
  }
  psu_name_->assign(value);
}
inline void deck_data::set_psu_name(const char* value) {
  set_has_psu_name();
  if (psu_name_ == &::google::protobuf::internal::kEmptyString) {
    psu_name_ = new ::std::string;
  }
  psu_name_->assign(value);
}
inline void deck_data::set_psu_name(const char* value, size_t size) {
  set_has_psu_name();
  if (psu_name_ == &::google::protobuf::internal::kEmptyString) {
    psu_name_ = new ::std::string;
  }
  psu_name_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* deck_data::mutable_psu_name() {
  set_has_psu_name();
  if (psu_name_ == &::google::protobuf::internal::kEmptyString) {
    psu_name_ = new ::std::string;
  }
  return psu_name_;
}
inline ::std::string* deck_data::release_psu_name() {
  clear_has_psu_name();
  if (psu_name_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = psu_name_;
    psu_name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void deck_data::set_allocated_psu_name(::std::string* psu_name) {
  if (psu_name_ != &::google::protobuf::internal::kEmptyString) {
    delete psu_name_;
  }
  if (psu_name) {
    set_has_psu_name();
    psu_name_ = psu_name;
  } else {
    clear_has_psu_name();
    psu_name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Hackers_Project

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_deck_2eproto__INCLUDED
