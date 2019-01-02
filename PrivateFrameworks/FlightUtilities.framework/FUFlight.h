/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/FlightUtilities.framework/FlightUtilities
 */

@interface FUFlight : NSObject <NSCopying, NSSecureCoding> {
    FUAirline * _airline;
    NSArray * _allLegs;
    unsigned long long  _arrivalLegIndex;
    NSString * _cancellationMessage;
    NSArray * _codeShares;
    unsigned long long  _departureLegIndex;
    FUAirline * _displayAirline;
    unsigned long long  _displayFlightNumber;
    NSDate * _expirationDate;
    NSString * _flightIdentifier;
    unsigned long long  _flightNumber;
    NSString * _identifier;
    NSArray * _legs;
    NSString * _queriedAirlineTitle;
    NSString * _rawResponse;
}

@property (retain) FUAirline *airline;
@property (nonatomic, retain) NSArray *allLegs;
@property (readonly) FUFlightStep *arrival;
@property unsigned long long arrivalLegIndex;
@property (retain) NSString *cancellationMessage;
@property (retain) NSArray *codeShares;
@property (readonly) FUFlightStep *departure;
@property unsigned long long departureLegIndex;
@property (retain) FUAirline *displayAirline;
@property (readonly) NSString *displayFlightCode;
@property unsigned long long displayFlightNumber;
@property (readonly) double duration;
@property (retain) NSDate *expirationDate;
@property (readonly) NSString *flightCode;
@property (retain) NSString *flightIdentifier;
@property unsigned long long flightNumber;
@property (nonatomic, retain) NSString *identifier;
@property (retain) NSArray *legs;
@property (retain) NSString *queriedAirlineTitle;
@property (retain) NSString *rawResponse;
@property (readonly) long long status;

+ (void)loadFlightsWithNumber:(unsigned long long)arg1 airlineCode:(id)arg2 date:(id)arg3 dateType:(long long)arg4 completionHandler:(id /* block */)arg5;
+ (bool)supportsSecureCoding;
+ (id)timeFormatterForIdentifier;

- (void).cxx_destruct;
- (id)airline;
- (id)allLegs;
- (id)arrival;
- (unsigned long long)arrivalLegIndex;
- (id)cancellationMessage;
- (id)codeShares;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)departure;
- (unsigned long long)departureLegIndex;
- (id)description;
- (id)displayAirline;
- (id)displayFlightCode;
- (unsigned long long)displayFlightNumber;
- (double)duration;
- (void)encodeWithCoder:(id)arg1;
- (id)expirationDate;
- (id)firstLeg;
- (id)flightCode;
- (id)flightIdentifier;
- (unsigned long long)flightNumber;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)lastLeg;
- (id)legs;
- (id)legsAsFlights;
- (id)queriedAirlineTitle;
- (id)rawResponse;
- (id)relevantLeg;
- (void)setAirline:(id)arg1;
- (void)setAllLegs:(id)arg1;
- (void)setArrivalLegIndex:(unsigned long long)arg1;
- (void)setCancellationMessage:(id)arg1;
- (void)setCodeShares:(id)arg1;
- (void)setDepartureLegIndex:(unsigned long long)arg1;
- (void)setDepartureLegIndex:(unsigned long long)arg1 arrivalLegIndex:(unsigned long long)arg2;
- (void)setDisplayAirline:(id)arg1;
- (void)setDisplayFlightNumber:(unsigned long long)arg1;
- (void)setExpirationDate:(id)arg1;
- (void)setFlightIdentifier:(id)arg1;
- (void)setFlightNumber:(unsigned long long)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLegs:(id)arg1;
- (void)setQueriedAirlineTitle:(id)arg1;
- (void)setRawResponse:(id)arg1;
- (long long)status;

@end