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


#if !defined(FIT_CHRONO_SHOT_SESSION_MESG_HPP)
#define FIT_CHRONO_SHOT_SESSION_MESG_HPP

#include "fit_mesg.hpp"

namespace fit
{

class ChronoShotSessionMesg : public Mesg
{
public:
    class FieldDefNum final
    {
    public:
       static const FIT_UINT8 Timestamp = 253;
       static const FIT_UINT8 MinSpeed = 0;
       static const FIT_UINT8 MaxSpeed = 1;
       static const FIT_UINT8 AvgSpeed = 2;
       static const FIT_UINT8 ShotCount = 3;
       static const FIT_UINT8 ProjectileType = 4;
       static const FIT_UINT8 GrainWeight = 5;
       static const FIT_UINT8 StandardDeviation = 6;
       static const FIT_UINT8 Invalid = FIT_FIELD_NUM_INVALID;
    };

    ChronoShotSessionMesg(void) : Mesg(Profile::MESG_CHRONO_SHOT_SESSION)
    {
    }

    ChronoShotSessionMesg(const Mesg &mesg) : Mesg(mesg)
    {
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of timestamp field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsTimestampValid() const
    {
        const Field* field = GetField(253);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns timestamp field
    ///////////////////////////////////////////////////////////////////////
    FIT_DATE_TIME GetTimestamp(void) const
    {
        return GetFieldUINT32Value(253, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set timestamp field
    ///////////////////////////////////////////////////////////////////////
    void SetTimestamp(FIT_DATE_TIME timestamp)
    {
        SetFieldUINT32Value(253, timestamp, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of min_speed field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsMinSpeedValid() const
    {
        const Field* field = GetField(0);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns min_speed field
    // Units: m/s
    ///////////////////////////////////////////////////////////////////////
    FIT_FLOAT32 GetMinSpeed(void) const
    {
        return GetFieldFLOAT32Value(0, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set min_speed field
    // Units: m/s
    ///////////////////////////////////////////////////////////////////////
    void SetMinSpeed(FIT_FLOAT32 minSpeed)
    {
        SetFieldFLOAT32Value(0, minSpeed, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of max_speed field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsMaxSpeedValid() const
    {
        const Field* field = GetField(1);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns max_speed field
    // Units: m/s
    ///////////////////////////////////////////////////////////////////////
    FIT_FLOAT32 GetMaxSpeed(void) const
    {
        return GetFieldFLOAT32Value(1, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set max_speed field
    // Units: m/s
    ///////////////////////////////////////////////////////////////////////
    void SetMaxSpeed(FIT_FLOAT32 maxSpeed)
    {
        SetFieldFLOAT32Value(1, maxSpeed, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of avg_speed field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsAvgSpeedValid() const
    {
        const Field* field = GetField(2);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns avg_speed field
    // Units: m/s
    ///////////////////////////////////////////////////////////////////////
    FIT_FLOAT32 GetAvgSpeed(void) const
    {
        return GetFieldFLOAT32Value(2, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set avg_speed field
    // Units: m/s
    ///////////////////////////////////////////////////////////////////////
    void SetAvgSpeed(FIT_FLOAT32 avgSpeed)
    {
        SetFieldFLOAT32Value(2, avgSpeed, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of shot_count field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsShotCountValid() const
    {
        const Field* field = GetField(3);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns shot_count field
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT16 GetShotCount(void) const
    {
        return GetFieldUINT16Value(3, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set shot_count field
    ///////////////////////////////////////////////////////////////////////
    void SetShotCount(FIT_UINT16 shotCount)
    {
        SetFieldUINT16Value(3, shotCount, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of projectile_type field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsProjectileTypeValid() const
    {
        const Field* field = GetField(4);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns projectile_type field
    ///////////////////////////////////////////////////////////////////////
    FIT_PROJECTILE_TYPE GetProjectileType(void) const
    {
        return GetFieldENUMValue(4, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set projectile_type field
    ///////////////////////////////////////////////////////////////////////
    void SetProjectileType(FIT_PROJECTILE_TYPE projectileType)
    {
        SetFieldENUMValue(4, projectileType, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of grain_weight field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsGrainWeightValid() const
    {
        const Field* field = GetField(5);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns grain_weight field
    // Units: gr
    ///////////////////////////////////////////////////////////////////////
    FIT_FLOAT32 GetGrainWeight(void) const
    {
        return GetFieldFLOAT32Value(5, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set grain_weight field
    // Units: gr
    ///////////////////////////////////////////////////////////////////////
    void SetGrainWeight(FIT_FLOAT32 grainWeight)
    {
        SetFieldFLOAT32Value(5, grainWeight, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of standard_deviation field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsStandardDeviationValid() const
    {
        const Field* field = GetField(6);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns standard_deviation field
    // Units: m/s
    ///////////////////////////////////////////////////////////////////////
    FIT_FLOAT32 GetStandardDeviation(void) const
    {
        return GetFieldFLOAT32Value(6, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set standard_deviation field
    // Units: m/s
    ///////////////////////////////////////////////////////////////////////
    void SetStandardDeviation(FIT_FLOAT32 standardDeviation)
    {
        SetFieldFLOAT32Value(6, standardDeviation, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

};

} // namespace fit

#endif // !defined(FIT_CHRONO_SHOT_SESSION_MESG_HPP)
