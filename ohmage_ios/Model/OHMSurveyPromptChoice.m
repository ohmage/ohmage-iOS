#import "OHMSurveyPromptChoice.h"


@interface OHMSurveyPromptChoice ()

// Private interface goes here.

@end


@implementation OHMSurveyPromptChoice

- (NSString *)description
{
    return [NSString stringWithFormat:@"text: %@, stringValue: %@, numberValue: %@, isDefault: %d",
     self.text, self.stringValue, self.numberValue, self.isDefaultValue];
}

@end