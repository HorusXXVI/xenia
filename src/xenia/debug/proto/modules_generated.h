// automatically generated by the FlatBuffers compiler, do not modify

#ifndef FLATBUFFERS_GENERATED_MODULES_XE_DEBUG_PROTO_H_
#define FLATBUFFERS_GENERATED_MODULES_XE_DEBUG_PROTO_H_

#include "flatbuffers/flatbuffers.h"

namespace xe {
namespace debug {
namespace proto {
struct XObject;
}  // namespace proto
}  // namespace debug
}  // namespace xe

namespace xe {
namespace debug {
namespace proto {

struct Module;
struct ListModulesRequest;
struct ListModulesResponse;
struct GetModuleRequest;
struct GetModuleResponse;

enum ModuleType {
  ModuleType_Kernel = 0,
  ModuleType_User = 1
};

inline const char **EnumNamesModuleType() {
  static const char *names[] = { "Kernel", "User", nullptr };
  return names;
}

inline const char *EnumNameModuleType(ModuleType e) { return EnumNamesModuleType()[e]; }

struct Module FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  const xe::debug::proto::XObject *object() const { return GetStruct<const xe::debug::proto::XObject *>(4); }
  ModuleType type() const { return static_cast<ModuleType>(GetField<int8_t>(6, 0)); }
  const flatbuffers::String *name() const { return GetPointer<const flatbuffers::String *>(8); }
  const flatbuffers::String *path() const { return GetPointer<const flatbuffers::String *>(10); }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<xe::debug::proto::XObject>(verifier, 4 /* object */) &&
           VerifyField<int8_t>(verifier, 6 /* type */) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, 8 /* name */) &&
           verifier.Verify(name()) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, 10 /* path */) &&
           verifier.Verify(path()) &&
           verifier.EndTable();
  }
};

struct ModuleBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_object(const xe::debug::proto::XObject *object) { fbb_.AddStruct(4, object); }
  void add_type(ModuleType type) { fbb_.AddElement<int8_t>(6, static_cast<int8_t>(type), 0); }
  void add_name(flatbuffers::Offset<flatbuffers::String> name) { fbb_.AddOffset(8, name); }
  void add_path(flatbuffers::Offset<flatbuffers::String> path) { fbb_.AddOffset(10, path); }
  ModuleBuilder(flatbuffers::FlatBufferBuilder &_fbb) : fbb_(_fbb) { start_ = fbb_.StartTable(); }
  ModuleBuilder &operator=(const ModuleBuilder &);
  flatbuffers::Offset<Module> Finish() {
    auto o = flatbuffers::Offset<Module>(fbb_.EndTable(start_, 4));
    return o;
  }
};

inline flatbuffers::Offset<Module> CreateModule(flatbuffers::FlatBufferBuilder &_fbb,
   const xe::debug::proto::XObject *object = 0,
   ModuleType type = ModuleType_Kernel,
   flatbuffers::Offset<flatbuffers::String> name = 0,
   flatbuffers::Offset<flatbuffers::String> path = 0) {
  ModuleBuilder builder_(_fbb);
  builder_.add_path(path);
  builder_.add_name(name);
  builder_.add_object(object);
  builder_.add_type(type);
  return builder_.Finish();
}

struct ListModulesRequest FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           verifier.EndTable();
  }
};

struct ListModulesRequestBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  ListModulesRequestBuilder(flatbuffers::FlatBufferBuilder &_fbb) : fbb_(_fbb) { start_ = fbb_.StartTable(); }
  ListModulesRequestBuilder &operator=(const ListModulesRequestBuilder &);
  flatbuffers::Offset<ListModulesRequest> Finish() {
    auto o = flatbuffers::Offset<ListModulesRequest>(fbb_.EndTable(start_, 0));
    return o;
  }
};

inline flatbuffers::Offset<ListModulesRequest> CreateListModulesRequest(flatbuffers::FlatBufferBuilder &_fbb) {
  ListModulesRequestBuilder builder_(_fbb);
  return builder_.Finish();
}

struct ListModulesResponse FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  const flatbuffers::Vector<uint32_t> *module_ids() const { return GetPointer<const flatbuffers::Vector<uint32_t> *>(4); }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, 4 /* module_ids */) &&
           verifier.Verify(module_ids()) &&
           verifier.EndTable();
  }
};

struct ListModulesResponseBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_module_ids(flatbuffers::Offset<flatbuffers::Vector<uint32_t>> module_ids) { fbb_.AddOffset(4, module_ids); }
  ListModulesResponseBuilder(flatbuffers::FlatBufferBuilder &_fbb) : fbb_(_fbb) { start_ = fbb_.StartTable(); }
  ListModulesResponseBuilder &operator=(const ListModulesResponseBuilder &);
  flatbuffers::Offset<ListModulesResponse> Finish() {
    auto o = flatbuffers::Offset<ListModulesResponse>(fbb_.EndTable(start_, 1));
    return o;
  }
};

inline flatbuffers::Offset<ListModulesResponse> CreateListModulesResponse(flatbuffers::FlatBufferBuilder &_fbb,
   flatbuffers::Offset<flatbuffers::Vector<uint32_t>> module_ids = 0) {
  ListModulesResponseBuilder builder_(_fbb);
  builder_.add_module_ids(module_ids);
  return builder_.Finish();
}

struct GetModuleRequest FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  uint32_t module_id() const { return GetField<uint32_t>(4, 0); }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint32_t>(verifier, 4 /* module_id */) &&
           verifier.EndTable();
  }
};

struct GetModuleRequestBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_module_id(uint32_t module_id) { fbb_.AddElement<uint32_t>(4, module_id, 0); }
  GetModuleRequestBuilder(flatbuffers::FlatBufferBuilder &_fbb) : fbb_(_fbb) { start_ = fbb_.StartTable(); }
  GetModuleRequestBuilder &operator=(const GetModuleRequestBuilder &);
  flatbuffers::Offset<GetModuleRequest> Finish() {
    auto o = flatbuffers::Offset<GetModuleRequest>(fbb_.EndTable(start_, 1));
    return o;
  }
};

inline flatbuffers::Offset<GetModuleRequest> CreateGetModuleRequest(flatbuffers::FlatBufferBuilder &_fbb,
   uint32_t module_id = 0) {
  GetModuleRequestBuilder builder_(_fbb);
  builder_.add_module_id(module_id);
  return builder_.Finish();
}

struct GetModuleResponse FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  const Module *module() const { return GetPointer<const Module *>(4); }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, 4 /* module */) &&
           verifier.VerifyTable(module()) &&
           verifier.EndTable();
  }
};

struct GetModuleResponseBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_module(flatbuffers::Offset<Module> module) { fbb_.AddOffset(4, module); }
  GetModuleResponseBuilder(flatbuffers::FlatBufferBuilder &_fbb) : fbb_(_fbb) { start_ = fbb_.StartTable(); }
  GetModuleResponseBuilder &operator=(const GetModuleResponseBuilder &);
  flatbuffers::Offset<GetModuleResponse> Finish() {
    auto o = flatbuffers::Offset<GetModuleResponse>(fbb_.EndTable(start_, 1));
    return o;
  }
};

inline flatbuffers::Offset<GetModuleResponse> CreateGetModuleResponse(flatbuffers::FlatBufferBuilder &_fbb,
   flatbuffers::Offset<Module> module = 0) {
  GetModuleResponseBuilder builder_(_fbb);
  builder_.add_module(module);
  return builder_.Finish();
}

}  // namespace proto
}  // namespace debug
}  // namespace xe

#endif  // FLATBUFFERS_GENERATED_MODULES_XE_DEBUG_PROTO_H_
