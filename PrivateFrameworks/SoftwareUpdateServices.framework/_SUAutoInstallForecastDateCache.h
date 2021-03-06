/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
 */

@interface _SUAutoInstallForecastDateCache : NSObject {
    NSCalendar * _calendar;
    BOOL  _parsed;
    NSDate * _roundedEndDate;
    NSDate * _roundedStartDate;
    int  _scheduleType;
    SUAutoInstallForecast * _weak_forecast;
}

@property (nonatomic, readonly) NSCalendar *calendar;
@property (nonatomic, readonly) NSDate *roundedEndTime;
@property (nonatomic, readonly) NSDate *roundedStartTime;
@property (nonatomic, readonly) int scheduleType;

- (void).cxx_destruct;
- (id)_componentsFromDate:(id)arg1;
- (void)_computeTonightRangeRelativeToDate:(id)arg1 extraDayOffset:(int)arg2 outStart:(id*)arg3 outEnd:(id*)arg4;
- (BOOL)_isStart:(id)arg1 end:(id)arg2 withinDateRange:(id)arg3 end:(id)arg4;
- (void)_parseForecast;
- (id)calendar;
- (void)dealloc;
- (id)description;
- (id)initWithForecast:(id)arg1;
- (id)roundedEndTime;
- (id)roundedStartTime;
- (int)scheduleType;

@end
