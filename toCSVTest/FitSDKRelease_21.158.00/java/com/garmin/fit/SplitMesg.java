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


package com.garmin.fit;



public class SplitMesg extends Mesg   {

    
    public static final int MessageIndexFieldNum = 254;
    
    public static final int SplitTypeFieldNum = 0;
    
    public static final int TotalElapsedTimeFieldNum = 1;
    
    public static final int TotalTimerTimeFieldNum = 2;
    
    public static final int TotalDistanceFieldNum = 3;
    
    public static final int AvgSpeedFieldNum = 4;
    
    public static final int StartTimeFieldNum = 9;
    
    public static final int TotalAscentFieldNum = 13;
    
    public static final int TotalDescentFieldNum = 14;
    
    public static final int StartPositionLatFieldNum = 21;
    
    public static final int StartPositionLongFieldNum = 22;
    
    public static final int EndPositionLatFieldNum = 23;
    
    public static final int EndPositionLongFieldNum = 24;
    
    public static final int MaxSpeedFieldNum = 25;
    
    public static final int AvgVertSpeedFieldNum = 26;
    
    public static final int EndTimeFieldNum = 27;
    
    public static final int TotalCaloriesFieldNum = 28;
    
    public static final int StartElevationFieldNum = 74;
    
    public static final int TotalMovingTimeFieldNum = 110;
    

    protected static final  Mesg splitMesg;
    static {
        // split
        splitMesg = new Mesg("split", MesgNum.SPLIT);
        splitMesg.addField(new Field("message_index", MessageIndexFieldNum, 132, 1, 0, "", false, Profile.Type.MESSAGE_INDEX));
        
        splitMesg.addField(new Field("split_type", SplitTypeFieldNum, 0, 1, 0, "", false, Profile.Type.SPLIT_TYPE));
        
        splitMesg.addField(new Field("total_elapsed_time", TotalElapsedTimeFieldNum, 134, 1000, 0, "s", false, Profile.Type.UINT32));
        
        splitMesg.addField(new Field("total_timer_time", TotalTimerTimeFieldNum, 134, 1000, 0, "s", false, Profile.Type.UINT32));
        
        splitMesg.addField(new Field("total_distance", TotalDistanceFieldNum, 134, 100, 0, "m", false, Profile.Type.UINT32));
        
        splitMesg.addField(new Field("avg_speed", AvgSpeedFieldNum, 134, 1000, 0, "m/s", false, Profile.Type.UINT32));
        
        splitMesg.addField(new Field("start_time", StartTimeFieldNum, 134, 1, 0, "", false, Profile.Type.DATE_TIME));
        
        splitMesg.addField(new Field("total_ascent", TotalAscentFieldNum, 132, 1, 0, "m", false, Profile.Type.UINT16));
        
        splitMesg.addField(new Field("total_descent", TotalDescentFieldNum, 132, 1, 0, "m", false, Profile.Type.UINT16));
        
        splitMesg.addField(new Field("start_position_lat", StartPositionLatFieldNum, 133, 1, 0, "semicircles", false, Profile.Type.SINT32));
        
        splitMesg.addField(new Field("start_position_long", StartPositionLongFieldNum, 133, 1, 0, "semicircles", false, Profile.Type.SINT32));
        
        splitMesg.addField(new Field("end_position_lat", EndPositionLatFieldNum, 133, 1, 0, "semicircles", false, Profile.Type.SINT32));
        
        splitMesg.addField(new Field("end_position_long", EndPositionLongFieldNum, 133, 1, 0, "semicircles", false, Profile.Type.SINT32));
        
        splitMesg.addField(new Field("max_speed", MaxSpeedFieldNum, 134, 1000, 0, "m/s", false, Profile.Type.UINT32));
        
        splitMesg.addField(new Field("avg_vert_speed", AvgVertSpeedFieldNum, 133, 1000, 0, "m/s", false, Profile.Type.SINT32));
        
        splitMesg.addField(new Field("end_time", EndTimeFieldNum, 134, 1, 0, "", false, Profile.Type.DATE_TIME));
        
        splitMesg.addField(new Field("total_calories", TotalCaloriesFieldNum, 134, 1, 0, "kcal", false, Profile.Type.UINT32));
        
        splitMesg.addField(new Field("start_elevation", StartElevationFieldNum, 134, 5, 500, "m", false, Profile.Type.UINT32));
        
        splitMesg.addField(new Field("total_moving_time", TotalMovingTimeFieldNum, 134, 1000, 0, "s", false, Profile.Type.UINT32));
        
    }

    public SplitMesg() {
        super(Factory.createMesg(MesgNum.SPLIT));
    }

    public SplitMesg(final Mesg mesg) {
        super(mesg);
    }


    /**
     * Get message_index field
     *
     * @return message_index
     */
    public Integer getMessageIndex() {
        return getFieldIntegerValue(254, 0, Fit.SUBFIELD_INDEX_MAIN_FIELD);
    }

    /**
     * Set message_index field
     *
     * @param messageIndex The new messageIndex value to be set
     */
    public void setMessageIndex(Integer messageIndex) {
        setFieldValue(254, 0, messageIndex, Fit.SUBFIELD_INDEX_MAIN_FIELD);
    }

    /**
     * Get split_type field
     *
     * @return split_type
     */
    public SplitType getSplitType() {
        Short value = getFieldShortValue(0, 0, Fit.SUBFIELD_INDEX_MAIN_FIELD);
        if (value == null) {
            return null;
        }
        return SplitType.getByValue(value);
    }

    /**
     * Set split_type field
     *
     * @param splitType The new splitType value to be set
     */
    public void setSplitType(SplitType splitType) {
        setFieldValue(0, 0, splitType.value, Fit.SUBFIELD_INDEX_MAIN_FIELD);
    }

    /**
     * Get total_elapsed_time field
     * Units: s
     *
     * @return total_elapsed_time
     */
    public Float getTotalElapsedTime() {
        return getFieldFloatValue(1, 0, Fit.SUBFIELD_INDEX_MAIN_FIELD);
    }

    /**
     * Set total_elapsed_time field
     * Units: s
     *
     * @param totalElapsedTime The new totalElapsedTime value to be set
     */
    public void setTotalElapsedTime(Float totalElapsedTime) {
        setFieldValue(1, 0, totalElapsedTime, Fit.SUBFIELD_INDEX_MAIN_FIELD);
    }

    /**
     * Get total_timer_time field
     * Units: s
     *
     * @return total_timer_time
     */
    public Float getTotalTimerTime() {
        return getFieldFloatValue(2, 0, Fit.SUBFIELD_INDEX_MAIN_FIELD);
    }

    /**
     * Set total_timer_time field
     * Units: s
     *
     * @param totalTimerTime The new totalTimerTime value to be set
     */
    public void setTotalTimerTime(Float totalTimerTime) {
        setFieldValue(2, 0, totalTimerTime, Fit.SUBFIELD_INDEX_MAIN_FIELD);
    }

    /**
     * Get total_distance field
     * Units: m
     *
     * @return total_distance
     */
    public Float getTotalDistance() {
        return getFieldFloatValue(3, 0, Fit.SUBFIELD_INDEX_MAIN_FIELD);
    }

    /**
     * Set total_distance field
     * Units: m
     *
     * @param totalDistance The new totalDistance value to be set
     */
    public void setTotalDistance(Float totalDistance) {
        setFieldValue(3, 0, totalDistance, Fit.SUBFIELD_INDEX_MAIN_FIELD);
    }

    /**
     * Get avg_speed field
     * Units: m/s
     *
     * @return avg_speed
     */
    public Float getAvgSpeed() {
        return getFieldFloatValue(4, 0, Fit.SUBFIELD_INDEX_MAIN_FIELD);
    }

    /**
     * Set avg_speed field
     * Units: m/s
     *
     * @param avgSpeed The new avgSpeed value to be set
     */
    public void setAvgSpeed(Float avgSpeed) {
        setFieldValue(4, 0, avgSpeed, Fit.SUBFIELD_INDEX_MAIN_FIELD);
    }

    /**
     * Get start_time field
     *
     * @return start_time
     */
    public DateTime getStartTime() {
        return timestampToDateTime(getFieldLongValue(9, 0, Fit.SUBFIELD_INDEX_MAIN_FIELD));
    }

    /**
     * Set start_time field
     *
     * @param startTime The new startTime value to be set
     */
    public void setStartTime(DateTime startTime) {
        setFieldValue(9, 0, startTime.getTimestamp(), Fit.SUBFIELD_INDEX_MAIN_FIELD);
    }

    /**
     * Get total_ascent field
     * Units: m
     *
     * @return total_ascent
     */
    public Integer getTotalAscent() {
        return getFieldIntegerValue(13, 0, Fit.SUBFIELD_INDEX_MAIN_FIELD);
    }

    /**
     * Set total_ascent field
     * Units: m
     *
     * @param totalAscent The new totalAscent value to be set
     */
    public void setTotalAscent(Integer totalAscent) {
        setFieldValue(13, 0, totalAscent, Fit.SUBFIELD_INDEX_MAIN_FIELD);
    }

    /**
     * Get total_descent field
     * Units: m
     *
     * @return total_descent
     */
    public Integer getTotalDescent() {
        return getFieldIntegerValue(14, 0, Fit.SUBFIELD_INDEX_MAIN_FIELD);
    }

    /**
     * Set total_descent field
     * Units: m
     *
     * @param totalDescent The new totalDescent value to be set
     */
    public void setTotalDescent(Integer totalDescent) {
        setFieldValue(14, 0, totalDescent, Fit.SUBFIELD_INDEX_MAIN_FIELD);
    }

    /**
     * Get start_position_lat field
     * Units: semicircles
     *
     * @return start_position_lat
     */
    public Integer getStartPositionLat() {
        return getFieldIntegerValue(21, 0, Fit.SUBFIELD_INDEX_MAIN_FIELD);
    }

    /**
     * Set start_position_lat field
     * Units: semicircles
     *
     * @param startPositionLat The new startPositionLat value to be set
     */
    public void setStartPositionLat(Integer startPositionLat) {
        setFieldValue(21, 0, startPositionLat, Fit.SUBFIELD_INDEX_MAIN_FIELD);
    }

    /**
     * Get start_position_long field
     * Units: semicircles
     *
     * @return start_position_long
     */
    public Integer getStartPositionLong() {
        return getFieldIntegerValue(22, 0, Fit.SUBFIELD_INDEX_MAIN_FIELD);
    }

    /**
     * Set start_position_long field
     * Units: semicircles
     *
     * @param startPositionLong The new startPositionLong value to be set
     */
    public void setStartPositionLong(Integer startPositionLong) {
        setFieldValue(22, 0, startPositionLong, Fit.SUBFIELD_INDEX_MAIN_FIELD);
    }

    /**
     * Get end_position_lat field
     * Units: semicircles
     *
     * @return end_position_lat
     */
    public Integer getEndPositionLat() {
        return getFieldIntegerValue(23, 0, Fit.SUBFIELD_INDEX_MAIN_FIELD);
    }

    /**
     * Set end_position_lat field
     * Units: semicircles
     *
     * @param endPositionLat The new endPositionLat value to be set
     */
    public void setEndPositionLat(Integer endPositionLat) {
        setFieldValue(23, 0, endPositionLat, Fit.SUBFIELD_INDEX_MAIN_FIELD);
    }

    /**
     * Get end_position_long field
     * Units: semicircles
     *
     * @return end_position_long
     */
    public Integer getEndPositionLong() {
        return getFieldIntegerValue(24, 0, Fit.SUBFIELD_INDEX_MAIN_FIELD);
    }

    /**
     * Set end_position_long field
     * Units: semicircles
     *
     * @param endPositionLong The new endPositionLong value to be set
     */
    public void setEndPositionLong(Integer endPositionLong) {
        setFieldValue(24, 0, endPositionLong, Fit.SUBFIELD_INDEX_MAIN_FIELD);
    }

    /**
     * Get max_speed field
     * Units: m/s
     *
     * @return max_speed
     */
    public Float getMaxSpeed() {
        return getFieldFloatValue(25, 0, Fit.SUBFIELD_INDEX_MAIN_FIELD);
    }

    /**
     * Set max_speed field
     * Units: m/s
     *
     * @param maxSpeed The new maxSpeed value to be set
     */
    public void setMaxSpeed(Float maxSpeed) {
        setFieldValue(25, 0, maxSpeed, Fit.SUBFIELD_INDEX_MAIN_FIELD);
    }

    /**
     * Get avg_vert_speed field
     * Units: m/s
     *
     * @return avg_vert_speed
     */
    public Float getAvgVertSpeed() {
        return getFieldFloatValue(26, 0, Fit.SUBFIELD_INDEX_MAIN_FIELD);
    }

    /**
     * Set avg_vert_speed field
     * Units: m/s
     *
     * @param avgVertSpeed The new avgVertSpeed value to be set
     */
    public void setAvgVertSpeed(Float avgVertSpeed) {
        setFieldValue(26, 0, avgVertSpeed, Fit.SUBFIELD_INDEX_MAIN_FIELD);
    }

    /**
     * Get end_time field
     *
     * @return end_time
     */
    public DateTime getEndTime() {
        return timestampToDateTime(getFieldLongValue(27, 0, Fit.SUBFIELD_INDEX_MAIN_FIELD));
    }

    /**
     * Set end_time field
     *
     * @param endTime The new endTime value to be set
     */
    public void setEndTime(DateTime endTime) {
        setFieldValue(27, 0, endTime.getTimestamp(), Fit.SUBFIELD_INDEX_MAIN_FIELD);
    }

    /**
     * Get total_calories field
     * Units: kcal
     *
     * @return total_calories
     */
    public Long getTotalCalories() {
        return getFieldLongValue(28, 0, Fit.SUBFIELD_INDEX_MAIN_FIELD);
    }

    /**
     * Set total_calories field
     * Units: kcal
     *
     * @param totalCalories The new totalCalories value to be set
     */
    public void setTotalCalories(Long totalCalories) {
        setFieldValue(28, 0, totalCalories, Fit.SUBFIELD_INDEX_MAIN_FIELD);
    }

    /**
     * Get start_elevation field
     * Units: m
     *
     * @return start_elevation
     */
    public Float getStartElevation() {
        return getFieldFloatValue(74, 0, Fit.SUBFIELD_INDEX_MAIN_FIELD);
    }

    /**
     * Set start_elevation field
     * Units: m
     *
     * @param startElevation The new startElevation value to be set
     */
    public void setStartElevation(Float startElevation) {
        setFieldValue(74, 0, startElevation, Fit.SUBFIELD_INDEX_MAIN_FIELD);
    }

    /**
     * Get total_moving_time field
     * Units: s
     *
     * @return total_moving_time
     */
    public Float getTotalMovingTime() {
        return getFieldFloatValue(110, 0, Fit.SUBFIELD_INDEX_MAIN_FIELD);
    }

    /**
     * Set total_moving_time field
     * Units: s
     *
     * @param totalMovingTime The new totalMovingTime value to be set
     */
    public void setTotalMovingTime(Float totalMovingTime) {
        setFieldValue(110, 0, totalMovingTime, Fit.SUBFIELD_INDEX_MAIN_FIELD);
    }

}
