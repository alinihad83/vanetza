#include <vanetza/security/v2/null_certificate_validator.hpp>

namespace vanetza
{
namespace security
{
namespace v2
{

NullCertificateValidator::NullCertificateValidator() : m_check_result(CertificateInvalidReason::Unknown_Signer)
{
}

CertificateValidity NullCertificateValidator::check_certificate(const Certificate&)
{
    return m_check_result;
}

void NullCertificateValidator::certificate_check_result(const CertificateValidity& result)
{
    m_check_result = result;
}

} // namespace v2
} // namespace security
} // namespace vanetza
