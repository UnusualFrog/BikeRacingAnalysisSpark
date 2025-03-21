/////////////////////////////////////////////////////////////////////////////////////////////
// Copyright 2024 Garmin International, Inc.
// Licensed under the Flexible and Interoperable Data Transfer (FIT) Protocol License; you
// may not use this file except in compliance with the Flexible and Interoperable Data
// Transfer (FIT) Protocol License.
/////////////////////////////////////////////////////////////////////////////////////////////
// ****WARNING****  This file is auto-generated!  Do NOT edit this file.
// Profile Version = 21.158.0Release
// Tag = production/release/21.158.0-0-gc9428aa
/////////////////////////////////////////////////////////////////////////////////////////////


#if !defined(FIT_HRM_PROFILE_MESG_LISTENER_HPP)
#define FIT_HRM_PROFILE_MESG_LISTENER_HPP

#include "fit_hrm_profile_mesg.hpp"

namespace fit
{

class HrmProfileMesgListener
{
public:
    virtual ~HrmProfileMesgListener() {}
    virtual void OnMesg(HrmProfileMesg& mesg) = 0;
};

} // namespace fit

#endif // !defined(FIT_HRM_PROFILE_MESG_LISTENER_HPP)
