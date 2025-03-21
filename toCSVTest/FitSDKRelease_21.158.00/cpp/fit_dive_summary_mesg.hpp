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


#if !defined(FIT_DIVE_SUMMARY_MESG_HPP)
#define FIT_DIVE_SUMMARY_MESG_HPP

#include "fit_mesg.hpp"

namespace fit
{

class DiveSummaryMesg : public Mesg
{
public:
    class FieldDefNum final
    {
    public:
       static const FIT_UINT8 Timestamp = 253;
       static const FIT_UINT8 ReferenceMesg = 0;
       static const FIT_UINT8 ReferenceIndex = 1;
       static const FIT_UINT8 AvgDepth = 2;
       static const FIT_UINT8 MaxDepth = 3;
       static const FIT_UINT8 SurfaceInterval = 4;
       static const FIT_UINT8 StartCns = 5;
       static const FIT_UINT8 EndCns = 6;
       static const FIT_UINT8 StartN2 = 7;
       static const FIT_UINT8 EndN2 = 8;
       static const FIT_UINT8 O2Toxicity = 9;
       static const FIT_UINT8 DiveNumber = 10;
       static const FIT_UINT8 BottomTime = 11;
       static const FIT_UINT8 AvgPressureSac = 12;
       static const FIT_UINT8 AvgVolumeSac = 13;
       static const FIT_UINT8 AvgRmv = 14;
       static const FIT_UINT8 DescentTime = 15;
       static const FIT_UINT8 AscentTime = 16;
       static const FIT_UINT8 AvgAscentRate = 17;
       static const FIT_UINT8 AvgDescentRate = 22;
       static const FIT_UINT8 MaxAscentRate = 23;
       static const FIT_UINT8 MaxDescentRate = 24;
       static const FIT_UINT8 HangTime = 25;
       static const FIT_UINT8 Invalid = FIT_FIELD_NUM_INVALID;
    };

    DiveSummaryMesg(void) : Mesg(Profile::MESG_DIVE_SUMMARY)
    {
    }

    DiveSummaryMesg(const Mesg &mesg) : Mesg(mesg)
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
    // Units: s
    ///////////////////////////////////////////////////////////////////////
    FIT_DATE_TIME GetTimestamp(void) const
    {
        return GetFieldUINT32Value(253, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set timestamp field
    // Units: s
    ///////////////////////////////////////////////////////////////////////
    void SetTimestamp(FIT_DATE_TIME timestamp)
    {
        SetFieldUINT32Value(253, timestamp, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of reference_mesg field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsReferenceMesgValid() const
    {
        const Field* field = GetField(0);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns reference_mesg field
    ///////////////////////////////////////////////////////////////////////
    FIT_MESG_NUM GetReferenceMesg(void) const
    {
        return GetFieldUINT16Value(0, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set reference_mesg field
    ///////////////////////////////////////////////////////////////////////
    void SetReferenceMesg(FIT_MESG_NUM referenceMesg)
    {
        SetFieldUINT16Value(0, referenceMesg, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of reference_index field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsReferenceIndexValid() const
    {
        const Field* field = GetField(1);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns reference_index field
    ///////////////////////////////////////////////////////////////////////
    FIT_MESSAGE_INDEX GetReferenceIndex(void) const
    {
        return GetFieldUINT16Value(1, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set reference_index field
    ///////////////////////////////////////////////////////////////////////
    void SetReferenceIndex(FIT_MESSAGE_INDEX referenceIndex)
    {
        SetFieldUINT16Value(1, referenceIndex, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of avg_depth field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsAvgDepthValid() const
    {
        const Field* field = GetField(2);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns avg_depth field
    // Units: m
    // Comment: 0 if above water
    ///////////////////////////////////////////////////////////////////////
    FIT_FLOAT32 GetAvgDepth(void) const
    {
        return GetFieldFLOAT32Value(2, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set avg_depth field
    // Units: m
    // Comment: 0 if above water
    ///////////////////////////////////////////////////////////////////////
    void SetAvgDepth(FIT_FLOAT32 avgDepth)
    {
        SetFieldFLOAT32Value(2, avgDepth, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of max_depth field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsMaxDepthValid() const
    {
        const Field* field = GetField(3);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns max_depth field
    // Units: m
    // Comment: 0 if above water
    ///////////////////////////////////////////////////////////////////////
    FIT_FLOAT32 GetMaxDepth(void) const
    {
        return GetFieldFLOAT32Value(3, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set max_depth field
    // Units: m
    // Comment: 0 if above water
    ///////////////////////////////////////////////////////////////////////
    void SetMaxDepth(FIT_FLOAT32 maxDepth)
    {
        SetFieldFLOAT32Value(3, maxDepth, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of surface_interval field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsSurfaceIntervalValid() const
    {
        const Field* field = GetField(4);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns surface_interval field
    // Units: s
    // Comment: Time since end of last dive
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT32 GetSurfaceInterval(void) const
    {
        return GetFieldUINT32Value(4, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set surface_interval field
    // Units: s
    // Comment: Time since end of last dive
    ///////////////////////////////////////////////////////////////////////
    void SetSurfaceInterval(FIT_UINT32 surfaceInterval)
    {
        SetFieldUINT32Value(4, surfaceInterval, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of start_cns field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsStartCnsValid() const
    {
        const Field* field = GetField(5);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns start_cns field
    // Units: percent
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT8 GetStartCns(void) const
    {
        return GetFieldUINT8Value(5, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set start_cns field
    // Units: percent
    ///////////////////////////////////////////////////////////////////////
    void SetStartCns(FIT_UINT8 startCns)
    {
        SetFieldUINT8Value(5, startCns, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of end_cns field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsEndCnsValid() const
    {
        const Field* field = GetField(6);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns end_cns field
    // Units: percent
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT8 GetEndCns(void) const
    {
        return GetFieldUINT8Value(6, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set end_cns field
    // Units: percent
    ///////////////////////////////////////////////////////////////////////
    void SetEndCns(FIT_UINT8 endCns)
    {
        SetFieldUINT8Value(6, endCns, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of start_n2 field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsStartN2Valid() const
    {
        const Field* field = GetField(7);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns start_n2 field
    // Units: percent
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT16 GetStartN2(void) const
    {
        return GetFieldUINT16Value(7, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set start_n2 field
    // Units: percent
    ///////////////////////////////////////////////////////////////////////
    void SetStartN2(FIT_UINT16 startN2)
    {
        SetFieldUINT16Value(7, startN2, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of end_n2 field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsEndN2Valid() const
    {
        const Field* field = GetField(8);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns end_n2 field
    // Units: percent
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT16 GetEndN2(void) const
    {
        return GetFieldUINT16Value(8, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set end_n2 field
    // Units: percent
    ///////////////////////////////////////////////////////////////////////
    void SetEndN2(FIT_UINT16 endN2)
    {
        SetFieldUINT16Value(8, endN2, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of o2_toxicity field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsO2ToxicityValid() const
    {
        const Field* field = GetField(9);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns o2_toxicity field
    // Units: OTUs
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT16 GetO2Toxicity(void) const
    {
        return GetFieldUINT16Value(9, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set o2_toxicity field
    // Units: OTUs
    ///////////////////////////////////////////////////////////////////////
    void SetO2Toxicity(FIT_UINT16 o2Toxicity)
    {
        SetFieldUINT16Value(9, o2Toxicity, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of dive_number field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsDiveNumberValid() const
    {
        const Field* field = GetField(10);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns dive_number field
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT32 GetDiveNumber(void) const
    {
        return GetFieldUINT32Value(10, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set dive_number field
    ///////////////////////////////////////////////////////////////////////
    void SetDiveNumber(FIT_UINT32 diveNumber)
    {
        SetFieldUINT32Value(10, diveNumber, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of bottom_time field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsBottomTimeValid() const
    {
        const Field* field = GetField(11);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns bottom_time field
    // Units: s
    ///////////////////////////////////////////////////////////////////////
    FIT_FLOAT32 GetBottomTime(void) const
    {
        return GetFieldFLOAT32Value(11, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set bottom_time field
    // Units: s
    ///////////////////////////////////////////////////////////////////////
    void SetBottomTime(FIT_FLOAT32 bottomTime)
    {
        SetFieldFLOAT32Value(11, bottomTime, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of avg_pressure_sac field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsAvgPressureSacValid() const
    {
        const Field* field = GetField(12);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns avg_pressure_sac field
    // Units: bar/min
    // Comment: Average pressure-based surface air consumption
    ///////////////////////////////////////////////////////////////////////
    FIT_FLOAT32 GetAvgPressureSac(void) const
    {
        return GetFieldFLOAT32Value(12, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set avg_pressure_sac field
    // Units: bar/min
    // Comment: Average pressure-based surface air consumption
    ///////////////////////////////////////////////////////////////////////
    void SetAvgPressureSac(FIT_FLOAT32 avgPressureSac)
    {
        SetFieldFLOAT32Value(12, avgPressureSac, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of avg_volume_sac field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsAvgVolumeSacValid() const
    {
        const Field* field = GetField(13);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns avg_volume_sac field
    // Units: L/min
    // Comment: Average volumetric surface air consumption
    ///////////////////////////////////////////////////////////////////////
    FIT_FLOAT32 GetAvgVolumeSac(void) const
    {
        return GetFieldFLOAT32Value(13, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set avg_volume_sac field
    // Units: L/min
    // Comment: Average volumetric surface air consumption
    ///////////////////////////////////////////////////////////////////////
    void SetAvgVolumeSac(FIT_FLOAT32 avgVolumeSac)
    {
        SetFieldFLOAT32Value(13, avgVolumeSac, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of avg_rmv field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsAvgRmvValid() const
    {
        const Field* field = GetField(14);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns avg_rmv field
    // Units: L/min
    // Comment: Average respiratory minute volume
    ///////////////////////////////////////////////////////////////////////
    FIT_FLOAT32 GetAvgRmv(void) const
    {
        return GetFieldFLOAT32Value(14, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set avg_rmv field
    // Units: L/min
    // Comment: Average respiratory minute volume
    ///////////////////////////////////////////////////////////////////////
    void SetAvgRmv(FIT_FLOAT32 avgRmv)
    {
        SetFieldFLOAT32Value(14, avgRmv, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of descent_time field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsDescentTimeValid() const
    {
        const Field* field = GetField(15);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns descent_time field
    // Units: s
    // Comment: Time to reach deepest level stop
    ///////////////////////////////////////////////////////////////////////
    FIT_FLOAT32 GetDescentTime(void) const
    {
        return GetFieldFLOAT32Value(15, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set descent_time field
    // Units: s
    // Comment: Time to reach deepest level stop
    ///////////////////////////////////////////////////////////////////////
    void SetDescentTime(FIT_FLOAT32 descentTime)
    {
        SetFieldFLOAT32Value(15, descentTime, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of ascent_time field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsAscentTimeValid() const
    {
        const Field* field = GetField(16);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns ascent_time field
    // Units: s
    // Comment: Time after leaving bottom until reaching surface
    ///////////////////////////////////////////////////////////////////////
    FIT_FLOAT32 GetAscentTime(void) const
    {
        return GetFieldFLOAT32Value(16, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set ascent_time field
    // Units: s
    // Comment: Time after leaving bottom until reaching surface
    ///////////////////////////////////////////////////////////////////////
    void SetAscentTime(FIT_FLOAT32 ascentTime)
    {
        SetFieldFLOAT32Value(16, ascentTime, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of avg_ascent_rate field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsAvgAscentRateValid() const
    {
        const Field* field = GetField(17);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns avg_ascent_rate field
    // Units: m/s
    // Comment: Average ascent rate, not including descents or stops
    ///////////////////////////////////////////////////////////////////////
    FIT_FLOAT32 GetAvgAscentRate(void) const
    {
        return GetFieldFLOAT32Value(17, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set avg_ascent_rate field
    // Units: m/s
    // Comment: Average ascent rate, not including descents or stops
    ///////////////////////////////////////////////////////////////////////
    void SetAvgAscentRate(FIT_FLOAT32 avgAscentRate)
    {
        SetFieldFLOAT32Value(17, avgAscentRate, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of avg_descent_rate field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsAvgDescentRateValid() const
    {
        const Field* field = GetField(22);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns avg_descent_rate field
    // Units: m/s
    // Comment: Average descent rate, not including ascents or stops
    ///////////////////////////////////////////////////////////////////////
    FIT_FLOAT32 GetAvgDescentRate(void) const
    {
        return GetFieldFLOAT32Value(22, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set avg_descent_rate field
    // Units: m/s
    // Comment: Average descent rate, not including ascents or stops
    ///////////////////////////////////////////////////////////////////////
    void SetAvgDescentRate(FIT_FLOAT32 avgDescentRate)
    {
        SetFieldFLOAT32Value(22, avgDescentRate, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of max_ascent_rate field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsMaxAscentRateValid() const
    {
        const Field* field = GetField(23);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns max_ascent_rate field
    // Units: m/s
    // Comment: Maximum ascent rate
    ///////////////////////////////////////////////////////////////////////
    FIT_FLOAT32 GetMaxAscentRate(void) const
    {
        return GetFieldFLOAT32Value(23, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set max_ascent_rate field
    // Units: m/s
    // Comment: Maximum ascent rate
    ///////////////////////////////////////////////////////////////////////
    void SetMaxAscentRate(FIT_FLOAT32 maxAscentRate)
    {
        SetFieldFLOAT32Value(23, maxAscentRate, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of max_descent_rate field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsMaxDescentRateValid() const
    {
        const Field* field = GetField(24);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns max_descent_rate field
    // Units: m/s
    // Comment: Maximum descent rate
    ///////////////////////////////////////////////////////////////////////
    FIT_FLOAT32 GetMaxDescentRate(void) const
    {
        return GetFieldFLOAT32Value(24, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set max_descent_rate field
    // Units: m/s
    // Comment: Maximum descent rate
    ///////////////////////////////////////////////////////////////////////
    void SetMaxDescentRate(FIT_FLOAT32 maxDescentRate)
    {
        SetFieldFLOAT32Value(24, maxDescentRate, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of hang_time field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsHangTimeValid() const
    {
        const Field* field = GetField(25);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns hang_time field
    // Units: s
    // Comment: Time spent neither ascending nor descending
    ///////////////////////////////////////////////////////////////////////
    FIT_FLOAT32 GetHangTime(void) const
    {
        return GetFieldFLOAT32Value(25, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set hang_time field
    // Units: s
    // Comment: Time spent neither ascending nor descending
    ///////////////////////////////////////////////////////////////////////
    void SetHangTime(FIT_FLOAT32 hangTime)
    {
        SetFieldFLOAT32Value(25, hangTime, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

};

} // namespace fit

#endif // !defined(FIT_DIVE_SUMMARY_MESG_HPP)
