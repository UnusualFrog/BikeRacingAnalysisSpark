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



public class HrMesg extends Mesg   {

    
    public static final int TimestampFieldNum = 253;
    
    public static final int FractionalTimestampFieldNum = 0;
    
    public static final int Time256FieldNum = 1;
    
    public static final int FilteredBpmFieldNum = 6;
    
    public static final int EventTimestampFieldNum = 9;
    
    public static final int EventTimestamp12FieldNum = 10;
    

    protected static final  Mesg hrMesg;
    static {int field_index = 0;
        // hr
        hrMesg = new Mesg("hr", MesgNum.HR);
        hrMesg.addField(new Field("timestamp", TimestampFieldNum, 134, 1, 0, "", false, Profile.Type.DATE_TIME));
        field_index++;
        hrMesg.addField(new Field("fractional_timestamp", FractionalTimestampFieldNum, 132, 32768, 0, "s", false, Profile.Type.UINT16));
        field_index++;
        hrMesg.addField(new Field("time256", Time256FieldNum, 2, 256, 0, "s", false, Profile.Type.UINT8));
        hrMesg.fields.get(field_index).components.add(new FieldComponent(0, false, 8, 256, 0)); // fractional_timestamp
        field_index++;
        hrMesg.addField(new Field("filtered_bpm", FilteredBpmFieldNum, 2, 1, 0, "bpm", false, Profile.Type.UINT8));
        field_index++;
        hrMesg.addField(new Field("event_timestamp", EventTimestampFieldNum, 134, 1024, 0, "s", true, Profile.Type.UINT32));
        field_index++;
        hrMesg.addField(new Field("event_timestamp_12", EventTimestamp12FieldNum, 13, 1, 0, "", false, Profile.Type.BYTE));
        hrMesg.fields.get(field_index).components.add(new FieldComponent(9, true, 12, 1024, 0)); // event_timestamp
        hrMesg.fields.get(field_index).components.add(new FieldComponent(9, true, 12, 1024, 0)); // event_timestamp
        hrMesg.fields.get(field_index).components.add(new FieldComponent(9, true, 12, 1024, 0)); // event_timestamp
        hrMesg.fields.get(field_index).components.add(new FieldComponent(9, true, 12, 1024, 0)); // event_timestamp
        hrMesg.fields.get(field_index).components.add(new FieldComponent(9, true, 12, 1024, 0)); // event_timestamp
        hrMesg.fields.get(field_index).components.add(new FieldComponent(9, true, 12, 1024, 0)); // event_timestamp
        hrMesg.fields.get(field_index).components.add(new FieldComponent(9, true, 12, 1024, 0)); // event_timestamp
        hrMesg.fields.get(field_index).components.add(new FieldComponent(9, true, 12, 1024, 0)); // event_timestamp
        hrMesg.fields.get(field_index).components.add(new FieldComponent(9, true, 12, 1024, 0)); // event_timestamp
        hrMesg.fields.get(field_index).components.add(new FieldComponent(9, true, 12, 1024, 0)); // event_timestamp
        field_index++;
    }

    public HrMesg() {
        super(Factory.createMesg(MesgNum.HR));
    }

    public HrMesg(final Mesg mesg) {
        super(mesg);
    }


    /**
     * Get timestamp field
     *
     * @return timestamp
     */
    public DateTime getTimestamp() {
        return timestampToDateTime(getFieldLongValue(253, 0, Fit.SUBFIELD_INDEX_MAIN_FIELD));
    }

    /**
     * Set timestamp field
     *
     * @param timestamp The new timestamp value to be set
     */
    public void setTimestamp(DateTime timestamp) {
        setFieldValue(253, 0, timestamp.getTimestamp(), Fit.SUBFIELD_INDEX_MAIN_FIELD);
    }

    /**
     * Get fractional_timestamp field
     * Units: s
     *
     * @return fractional_timestamp
     */
    public Float getFractionalTimestamp() {
        return getFieldFloatValue(0, 0, Fit.SUBFIELD_INDEX_MAIN_FIELD);
    }

    /**
     * Set fractional_timestamp field
     * Units: s
     *
     * @param fractionalTimestamp The new fractionalTimestamp value to be set
     */
    public void setFractionalTimestamp(Float fractionalTimestamp) {
        setFieldValue(0, 0, fractionalTimestamp, Fit.SUBFIELD_INDEX_MAIN_FIELD);
    }

    /**
     * Get time256 field
     * Units: s
     *
     * @return time256
     */
    public Float getTime256() {
        return getFieldFloatValue(1, 0, Fit.SUBFIELD_INDEX_MAIN_FIELD);
    }

    /**
     * Set time256 field
     * Units: s
     *
     * @param time256 The new time256 value to be set
     */
    public void setTime256(Float time256) {
        setFieldValue(1, 0, time256, Fit.SUBFIELD_INDEX_MAIN_FIELD);
    }

    public Short[] getFilteredBpm() {
        
        return getFieldShortValues(6, Fit.SUBFIELD_INDEX_MAIN_FIELD);
        
    }

    /**
     * @return number of filtered_bpm
     */
    public int getNumFilteredBpm() {
        return getNumFieldValues(6, Fit.SUBFIELD_INDEX_MAIN_FIELD);
    }

    /**
     * Get filtered_bpm field
     * Units: bpm
     *
     * @param index of filtered_bpm
     * @return filtered_bpm
     */
    public Short getFilteredBpm(int index) {
        return getFieldShortValue(6, index, Fit.SUBFIELD_INDEX_MAIN_FIELD);
    }

    /**
     * Set filtered_bpm field
     * Units: bpm
     *
     * @param index of filtered_bpm
     * @param filteredBpm The new filteredBpm value to be set
     */
    public void setFilteredBpm(int index, Short filteredBpm) {
        setFieldValue(6, index, filteredBpm, Fit.SUBFIELD_INDEX_MAIN_FIELD);
    }

    public Float[] getEventTimestamp() {
        
        return getFieldFloatValues(9, Fit.SUBFIELD_INDEX_MAIN_FIELD);
        
    }

    /**
     * @return number of event_timestamp
     */
    public int getNumEventTimestamp() {
        return getNumFieldValues(9, Fit.SUBFIELD_INDEX_MAIN_FIELD);
    }

    /**
     * Get event_timestamp field
     * Units: s
     *
     * @param index of event_timestamp
     * @return event_timestamp
     */
    public Float getEventTimestamp(int index) {
        return getFieldFloatValue(9, index, Fit.SUBFIELD_INDEX_MAIN_FIELD);
    }

    /**
     * Set event_timestamp field
     * Units: s
     *
     * @param index of event_timestamp
     * @param eventTimestamp The new eventTimestamp value to be set
     */
    public void setEventTimestamp(int index, Float eventTimestamp) {
        setFieldValue(9, index, eventTimestamp, Fit.SUBFIELD_INDEX_MAIN_FIELD);
    }

    public Byte[] getEventTimestamp12() {
        
        return getFieldByteValues(10, Fit.SUBFIELD_INDEX_MAIN_FIELD);
        
    }

    /**
     * @return number of event_timestamp_12
     */
    public int getNumEventTimestamp12() {
        return getNumFieldValues(10, Fit.SUBFIELD_INDEX_MAIN_FIELD);
    }

    /**
     * Get event_timestamp_12 field
     *
     * @param index of event_timestamp_12
     * @return event_timestamp_12
     */
    public Byte getEventTimestamp12(int index) {
        return getFieldByteValue(10, index, Fit.SUBFIELD_INDEX_MAIN_FIELD);
    }

    /**
     * Set event_timestamp_12 field
     *
     * @param index of event_timestamp_12
     * @param eventTimestamp12 The new eventTimestamp12 value to be set
     */
    public void setEventTimestamp12(int index, Byte eventTimestamp12) {
        setFieldValue(10, index, eventTimestamp12, Fit.SUBFIELD_INDEX_MAIN_FIELD);
    }

}
