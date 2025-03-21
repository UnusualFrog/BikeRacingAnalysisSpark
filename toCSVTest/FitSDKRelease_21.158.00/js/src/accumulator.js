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


class AccumulatedField {
    #accumulatedValue = 0;
    #lastValue = 0;

    constructor(value) {
        this.#accumulatedValue = value;
        this.#lastValue = value;
    }

    accumulate(value, bits) {
        const mask = (1 << bits) - 1;

        this.#accumulatedValue += (value - this.#lastValue) & mask;
        this.#lastValue = value;

        return this.#accumulatedValue;
    }
}

class Accumulator {
    #messages = {};

    createAccumulatedField(mesgNum, fieldNum, value) {
        const accumualtedField = new AccumulatedField(value);

        if (this.#messages[mesgNum] == null) {
            this.#messages[mesgNum] = {};
        }

        this.#messages[mesgNum][fieldNum] = accumualtedField;

        return accumualtedField;
    }

    accumulate(mesgNum, fieldNum, value, bits) {
        let accumualtedField = this.#messages[mesgNum]?.[fieldNum];
        
        if(accumualtedField == null) {
            accumualtedField = this.createAccumulatedField(mesgNum, fieldNum, value);
        }

        return accumualtedField.accumulate(value, bits);
    }
}

export default Accumulator;
