// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ServerProgressBar.proto

#include "ServerProgressBar.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/io/zero_copy_stream_impl_lite.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
class ServerProgressBarDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<ServerProgressBar> _instance;
} _ServerProgressBar_default_instance_;
static void InitDefaultsscc_info_ServerProgressBar_ServerProgressBar_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::_ServerProgressBar_default_instance_;
    new (ptr) ::ServerProgressBar();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::ServerProgressBar::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_ServerProgressBar_ServerProgressBar_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_ServerProgressBar_ServerProgressBar_2eproto}, {}};


// ===================================================================

void ServerProgressBar::InitAsDefaultInstance() {
}
class ServerProgressBar::_Internal {
 public:
};

ServerProgressBar::ServerProgressBar()
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:ServerProgressBar)
}
ServerProgressBar::ServerProgressBar(const ServerProgressBar& from)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  taskname_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_taskname().empty()) {
    taskname_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.taskname_);
  }
  ::memcpy(&sequenceid_, &from.sequenceid_,
    static_cast<size_t>(reinterpret_cast<char*>(&total_) -
    reinterpret_cast<char*>(&sequenceid_)) + sizeof(total_));
  // @@protoc_insertion_point(copy_constructor:ServerProgressBar)
}

void ServerProgressBar::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_ServerProgressBar_ServerProgressBar_2eproto.base);
  taskname_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  ::memset(&sequenceid_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&total_) -
      reinterpret_cast<char*>(&sequenceid_)) + sizeof(total_));
}

ServerProgressBar::~ServerProgressBar() {
  // @@protoc_insertion_point(destructor:ServerProgressBar)
  SharedDtor();
}

void ServerProgressBar::SharedDtor() {
  taskname_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void ServerProgressBar::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ServerProgressBar& ServerProgressBar::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_ServerProgressBar_ServerProgressBar_2eproto.base);
  return *internal_default_instance();
}


void ServerProgressBar::Clear() {
// @@protoc_insertion_point(message_clear_start:ServerProgressBar)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  taskname_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  ::memset(&sequenceid_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&total_) -
      reinterpret_cast<char*>(&sequenceid_)) + sizeof(total_));
  _internal_metadata_.Clear();
}

const char* ServerProgressBar::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // uint64 SequenceId = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          sequenceid_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string TaskName = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          auto str = _internal_mutable_taskname();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, nullptr));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // uint64 Current = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 24)) {
          current_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // uint64 Total = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 32)) {
          total_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* ServerProgressBar::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:ServerProgressBar)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint64 SequenceId = 1;
  if (this->sequenceid() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt64ToArray(1, this->_internal_sequenceid(), target);
  }

  // string TaskName = 2;
  if (this->taskname().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_taskname().data(), static_cast<int>(this->_internal_taskname().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "ServerProgressBar.TaskName");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_taskname(), target);
  }

  // uint64 Current = 3;
  if (this->current() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt64ToArray(3, this->_internal_current(), target);
  }

  // uint64 Total = 4;
  if (this->total() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt64ToArray(4, this->_internal_total(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = stream->WriteRaw(_internal_metadata_.unknown_fields().data(),
        static_cast<int>(_internal_metadata_.unknown_fields().size()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:ServerProgressBar)
  return target;
}

size_t ServerProgressBar::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:ServerProgressBar)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string TaskName = 2;
  if (this->taskname().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_taskname());
  }

  // uint64 SequenceId = 1;
  if (this->sequenceid() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt64Size(
        this->_internal_sequenceid());
  }

  // uint64 Current = 3;
  if (this->current() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt64Size(
        this->_internal_current());
  }

  // uint64 Total = 4;
  if (this->total() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt64Size(
        this->_internal_total());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    total_size += _internal_metadata_.unknown_fields().size();
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void ServerProgressBar::CheckTypeAndMergeFrom(
    const ::PROTOBUF_NAMESPACE_ID::MessageLite& from) {
  MergeFrom(*::PROTOBUF_NAMESPACE_ID::internal::DownCast<const ServerProgressBar*>(
      &from));
}

void ServerProgressBar::MergeFrom(const ServerProgressBar& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:ServerProgressBar)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.taskname().size() > 0) {

    taskname_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.taskname_);
  }
  if (from.sequenceid() != 0) {
    _internal_set_sequenceid(from._internal_sequenceid());
  }
  if (from.current() != 0) {
    _internal_set_current(from._internal_current());
  }
  if (from.total() != 0) {
    _internal_set_total(from._internal_total());
  }
}

void ServerProgressBar::CopyFrom(const ServerProgressBar& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:ServerProgressBar)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ServerProgressBar::IsInitialized() const {
  return true;
}

void ServerProgressBar::InternalSwap(ServerProgressBar* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  taskname_.Swap(&other->taskname_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(sequenceid_, other->sequenceid_);
  swap(current_, other->current_);
  swap(total_, other->total_);
}

std::string ServerProgressBar::GetTypeName() const {
  return "ServerProgressBar";
}


// @@protoc_insertion_point(namespace_scope)
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::ServerProgressBar* Arena::CreateMaybeMessage< ::ServerProgressBar >(Arena* arena) {
  return Arena::CreateInternal< ::ServerProgressBar >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>