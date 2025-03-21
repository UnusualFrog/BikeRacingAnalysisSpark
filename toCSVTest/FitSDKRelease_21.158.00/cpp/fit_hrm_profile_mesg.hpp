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


#if !defined(FIT_HRM_PROFILE_MESG_HPP)
#define FIT_HRM_PROFILE_MESG_HPP

#include "fit_mesg.hpp"

namespace fit
{

class HrmProfileMesg : public Mesg
{
public:
    class FieldDefNum final
    {
    public:
       static const FIT_UINT8 MessageIndex = 254;
       static const FIT_UINT8 Enabled = 0;
       static const FIT_UINT8 HrmAntId = 1;
       static const FIT_UINT8 LogHrv = 2;
       static const FIT_UINT8 HrmAntIdTransType = 3;
       static const FIT_UINT8 Invalid = FIT_FIELD_NUM_INVALID;
    };

    HrmProfileMesg(void) : Mesg(Profile::MESG_HRM_PROFILE)
    {
    }

    HrmProfileMesg(const Mesg &mesg) : Mesg(mesg)
    {
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of message_index field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsMessageIndexValid() const
    {
        const Field* field = GetField(254);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns message_index field
    ///////////////////////////////////////////////////////////////////////
    FIT_MESSAGE_INDEX GetMessageIndex(void) const
    {
        return GetFieldUINT16Value(254, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set message_index field
    ///////////////////////////////////////////////////////////////////////
    void SetMessageIndex(FIT_MESSAGE_INDEX messageIndex)
    {
        SetFieldUINT16Value(254, messageIndex, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of enabled field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsEnabledValid() const
    {
        const Field* field = GetField(0);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns enabled field
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL GetEnabled(void) const
    {
        return GetFieldENUMValue(0, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set enabled field
    ///////////////////////////////////////////////////////////////////////
    void SetEnabled(FIT_BOOL enabled)
    {
        SetFieldENUMValue(0, enabled, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of hrm_ant_id field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsHrmAntIdValid() const
    {
        const Field* field = GetField(1);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns hrm_ant_id field
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT16Z GetHrmAntId(void) const
    {
        return GetFieldUINT16ZValue(1, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set hrm_ant_id field
    ///////////////////////////////////////////////////////////////////////
    void SetHrmAntId(FIT_UINT16Z hrmAntId)
    {
        SetFieldUINT16ZValue(1, hrmAntId, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of log_hrv field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsLogHrvValid() const
    {
        const Field* field = GetField(2);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns log_hrv field
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL GetLogHrv(void) const
    {
        return GetFieldENUMValue(2, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set log_hrv field
    ///////////////////////////////////////////////////////////////////////
    void SetLogHrv(FIT_BOOL logHrv)
    {
        SetFieldENUMValue(2, logHrv, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of hrm_ant_id_trans_type field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsHrmAntIdTransTypeValid() const
    {
        const Field* field = GetField(3);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns hrm_ant_id_trans_type field
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT8Z GetHrmAntIdTransType(void) const
    {
        return GetFieldUINT8ZValue(3, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set hrm_ant_id_trans_type field
    ///////////////////////////////////////////////////////////////////////
    void SetHrmAntIdTransType(FIT_UINT8Z hrmAntIdTransType)
    {
        SetFieldUINT8ZValue(3, hrmAntIdTransType, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

};

} // namespace fit

#endif // !defined(FIT_HRM_PROFILE_MESG_HPP)
