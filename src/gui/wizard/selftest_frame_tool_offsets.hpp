#pragma once

#include "selftest_frame.hpp"
#include "window_icon.hpp"
#include "window_wizard_progress.hpp"
#include "radio_button.hpp"
#include "status_footer.hpp"

class SelftestFrameToolOffsets : public AddSuperWindow<SelftestFrameNamedWithRadio> {
    FooterLine footer;
    window_wizard_progress_t progress;
    window_text_t text_phase;
    window_text_t text_estimate; ///< Estimate how long it will take

protected:
    virtual void change() override;

public:
    SelftestFrameToolOffsets(window_t *parent, PhasesSelftest ph, fsm::PhaseData data);
};
