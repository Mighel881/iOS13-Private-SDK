//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FitnessUI/FIUIHealthSettingsPickerController.h>

@interface FIUIHealthSettingsSexPickerController : FIUIHealthSettingsPickerController
{
    id /* CDUnknownBlockType */ _sexUpdateHandler;
}

@property(copy, nonatomic) id /* CDUnknownBlockType */ sexUpdateHandler; // @synthesize sexUpdateHandler=_sexUpdateHandler;
// - (void).cxx_destruct;
- (void)setBiologicalSex:(long long)arg1;
- (long long)_biologicalSexForRow:(long long)arg1;
- (void)_updateWithBiologicalSex:(long long)arg1;
- (id)pickerView:(id)arg1 attributedTitleForRow:(long long)arg2 forComponent:(long long)arg3;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)forceUpdate;

@end
