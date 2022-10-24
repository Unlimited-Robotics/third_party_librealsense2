// License: Apache 2.0. See LICENSE file in root directory.
// Copyright(c) 2022 Intel Corporation. All Rights Reserved.

#pragma once


namespace eprosima {
namespace fastdds {
namespace dds {
    class DomainParticipant;
}  // namespace dds
}  // namespace fastdds
namespace fastrtps {
namespace rtps {
    struct GUID_t;
    struct GuidPrefix_t;
    struct EntityId_t;
}  // namespace rtps
namespace types {
    class DynamicType_ptr;
}  // namespace types
}  // namespace fastrtps
}  // namespace eprosima

namespace realdds {


using dds_guid = eprosima::fastrtps::rtps::GUID_t;
using dds_guid_prefix = eprosima::fastrtps::rtps::GuidPrefix_t;
using dds_entity_id = eprosima::fastrtps::rtps::EntityId_t;
typedef int dds_domain_id;


}  // namespace realdds
