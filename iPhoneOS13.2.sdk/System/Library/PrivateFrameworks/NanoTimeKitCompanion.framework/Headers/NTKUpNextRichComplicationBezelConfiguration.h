//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKUpNextComplicationConfiguration.h>

@class UIImage;

@interface NTKUpNextRichComplicationBezelConfiguration : NTKUpNextComplicationConfiguration
{
    UIImage *_maskImage;
    double _radius;
}

@property(readonly, nonatomic) double radius; // @synthesize radius=_radius;
@property(readonly, nonatomic) UIImage *maskImage; // @synthesize maskImage=_maskImage;
- (id)_newPickerView;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithMaskImage:(id)arg1 radius:(double)arg2;

@end
