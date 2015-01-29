/*
 *  SCKDayPoint.h
 *  ScheduleKit
 *
 *  Created:    Guillem Servera on 31/12/2014.
 *  Copyright:  © 2014-2015 Guillem Servera (http://github.com/gservera)
 *
 *  Permission is hereby granted, free of charge, to any person obtaining a copy
 *  of this software and associated documentation files (the "Software"), to deal
 *  in the Software without restriction, including without limitation the rights
 *  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 *  copies of the Software, and to permit persons to whom the Software is
 *  furnished to do so, subject to the following conditions:
 *
 *  The above copyright notice and this permission notice shall be included in
 *  all copies or substantial portions of the Software.
 *
 *  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 *  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 *  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 *  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 *  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 *  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 *  THE SOFTWARE.
 */

@import Foundation;

/** Instances of this class represent an abstract time point between the start
    and the end of a day-width time range. */
@interface SCKDayPoint : NSObject

+ (instancetype)zeroPoint;
- (instancetype)initWithDate:(NSDate*)date;
- (instancetype)initWithHour:(NSInteger)h minute:(NSInteger)m second:(NSInteger)s;

- (BOOL)isEarlierThanDayPoint:(SCKDayPoint*)p;
- (BOOL)isLaterThanDayPoint:(SCKDayPoint*)p;

@property (readonly) NSTimeInterval dayOffset;
@property (assign) NSInteger hour;
@property (assign) NSInteger minute;
@property (assign) NSInteger second;
@end
