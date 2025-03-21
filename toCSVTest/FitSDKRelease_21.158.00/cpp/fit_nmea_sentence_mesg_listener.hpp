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


#if !defined(FIT_NMEA_SENTENCE_MESG_LISTENER_HPP)
#define FIT_NMEA_SENTENCE_MESG_LISTENER_HPP

#include "fit_nmea_sentence_mesg.hpp"

namespace fit
{

class NmeaSentenceMesgListener
{
public:
    virtual ~NmeaSentenceMesgListener() {}
    virtual void OnMesg(NmeaSentenceMesg& mesg) = 0;
};

} // namespace fit

#endif // !defined(FIT_NMEA_SENTENCE_MESG_LISTENER_HPP)
